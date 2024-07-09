int main() {
    int memTime;
    cin >> memTime;
    int memLate[memTime];
    for (int i = 0; i < memTime; i++) {
        cin >> memLate[i];
    }
    vector<int> colorList;
    int memColor = 0;
    int highLate = 0;
    for (int color = 0; color < memTime; color++) {
        int member = memLate[color];
        if (member / 400 >= 8) {
            highLate++;
        } else if (find(colorList.begin(), colorList.end(), member / 400) == colorList.end()) {
            colorList.push_back(member / 400);
        }
    }
    int maxColor = colorList.size() + highLate;
    int minColor = colorList.size();
    if (minColor == 0) {
        minColor = 1;
    }
    cout << minColor << " " << maxColor << endl;
    return 0;
}