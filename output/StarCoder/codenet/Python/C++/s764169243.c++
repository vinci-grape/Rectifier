#include <bits/stdc++.h>
using namespace std;

// SegmentTree Class
class SegmentTree{
public:
	int size;
	int default;
	vector<int> seg;
	int segfunc(int x, int y){
		return max(x,y);
	}
	void update(int k, int x){
		k += size-1;
		seg[k] = x;
		while(k){
			k = (k-1)/2;
			seg[k] = segfunc(seg[2*k+1],seg[2*k+2]);
		}
	}
	int query(int p, int q){
		if(q <= p) return default;
		p += size-1;q += size-2;
		int ret = default;
		while(q-p > 1){
			if(p&1 == 0) ret = segfunc(ret,seg[p]);
			if(q&1 == 1) ret = segfunc(ret,seg[q]), q--;
			p /= 2;
			q = (q-1)/2;
		}
		ret = segfunc(segfunc(ret,seg[p]),seg[q]);
		return ret;
	}
	void seg_print(){
		for(int i = 0; i < size; i++) cout << seg[i] << " ";
		cout << endl;
	}
	SegmentTree(int size, int default){
		this->size = 1;
		while(this->size < size) this->size *= 2;
		this->default = default;
		seg.assign(2*this->size-1, default);
	}
};

int main(){
	int N;
	cin >> N;
	vector<int> a(N);
	for(int i = 0; i < N; i++) cin >> a[i];
	vector<int> ans(N, 0);
	SegmentTree left_seg(N, 0);
	for(int i = 0; i < N; i++){
		ans[a[i]-1] += i+1 - left_seg.query(0, a[i]);
		left_seg.update(a[i]-1, i+1);
	}
	SegmentTree right_seg(N, 0);
	for(int i = N-1; i >= 0; i--){
		ans[a[i]-1] += i+1 - right_seg.query(0, a[i]);
		right_seg.update(a[i]-1, i+1);
	}
	cout << accumulate(ans.begin(), ans.end(), 0) << endl;
	return 0;
}