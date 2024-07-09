#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int MAX = 1005;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> g[MAX];
    for (int i = 0; i < n; i++) {
        int u, k;
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; j++) {
            int v;
            scanf("%d", &v);
            g[u].push_back(v);
        }
    }
    int d[MAX];
    queue<int> que;
    que.push(1);
    d[1] = 0;
    while (!que.empty()) {
        int top = que.front();
        que.pop();
        for (int i = 1; i <= n; i++) {
            if (g[top][i] == 1 && d[i] == -1) {
                que.push(i);
                d[i] = d[top] + 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d %d\n", i, d[i]);
    }
    return 0;
}



Output:

1 0
2 1
3 2
4 3
5 4
6 5
7 6
8 7
9 8
10 9
11 10
12 11
13 12
14 13
15 14
16 15
17 16
18 17
19 18
20 19
21 20
22 21
23 22
24 23
25 24
26 25
27 26
28 27
29 28
30 29
31 30
32 31
33 32
34 33
35 34
36 35
37 36
38 37
39 38
40 39
41 40
42 41
43 42
44 43
45 44
46 45
47 46
48 47
49 48
50 49
51 50
52 51
53 52
54 53
55 54
56 55
57 56
58 57
59 58
60 59
61 60
62 61
63 62
64 63
65 64
66 65
67 66
68 67
69 68
70 69
71 70
72 71
73 72
74 73
75 74
76 75
77 76
78 77
79 78
80 79
81 80
82 81
83 82
84 83
85 84
86 85
87 86
88 87
89 88
90 89
91 90
92 91
93 92
94 93
95 94
96 95
97 96
98 97
99 98
100 99
101 100
102 101
103 102
104 103
105 104
106 105
107 106
108 107
109 108
110 109
111 110
112 111
113 112
114 113
115 114
116 115
117 116
118 117
119 118
120 119
121 120
122 121
123 122
124 123
125 124
126 125
127 126
128 127
129 128
130 129
131 130
132 131
133 132
134 133
135 134
136 135
137 136
138 137
139 138
140 139
141 140
142 141
143 142
144 143
145 144
146 145
147 146
148 147
149 148
150 149
151 150
152 151
153 152
154 153
155 154
156 155
157 156
158 157
159 158
160 159
161 160
162 161
163 162
164 163
165 164
166 165
167 166
168 167
169 168
170 169
171 170
172 171
173 172
174 173
175 174
176 175
177 176
178 177
179 178
180 179
181 180
182 181
183 182
184 183
185 184
186 185
187 186
188 187
189 188
190 189
191 190
192 191
193 192
194 193
195 194
196 195
197 196
198 197
199 198
200 199
201 200
202 201
203 202
204 203
205 204
206 205
207 206
208 207
209 208
210 209
211 210
212 211
213 212
214 213
215 214
216 215
217 216
218 217
219 218
220 219
221 220
222 221
223 222
224 223
225 224
226 225
227 226
228 227
229 228
230 229
231 230
232 231
233 232
234 233
235 234
236 235
237 236
238 237
239 238
240 239
241 240
242 241
243 242
244 243
245 244
246 245
247 246
248 247
249 248
250 249
251 250
252 251
253 252
254 253
255 254
256 255
257 256
258 257
259 258
260 259
261 260
262 261
263 262
264 263
265 264
266 265
267 266
268 267
269 268
270 269
271 270
272 271
273 272
274 273
275 274
276 275
277 276
278 277
279 278
280 279
281 280
282 281
283 282
284 283
285 284
286 285
287 286
288 287
289 288
290 289
291 290
292 291
293 292
294 293
295 294
296 295
297 296
298 297
299 298
300 299
301 300
302 301
303 302
304 303
305 304
306 305
307 306
308 307
309 308
310 309
311 310
312 311
313 312
314 313
315 314
316 315
317 316
318 317
319 318
320 319
321 320
322 321
323 322
324 323
325 324
326 325
327 326
328 327
329 328
330 329
331 330
332 331
333 332
334 333
335 334
336 335
337 336
338 337
339 338
340 339
341 340
342 341
343 342
344 343
345 344
346 345
347 346
348 347
349 348
350 349
351 350
352 351
353 352
354 353
355 354
356 355
357 356
358 357
359 358
360 359
361 360
362 361
363 362
364 363
365 364
366 365
367 366
368 367
369 368
370 369
371 370
372 371
373 372
374 373
375 374
376 375
377 376
378 377
379 378
380 379
381 380
382 381
383 382
384 383
385 384
386 385
387 386
388 387
389 388
390 389
391 390
392 391
393 392
394 393
395 394
396 395
397 396
398 397
399 398
400 399
401 400
402 401
403 402
404 403
405 404
406 405
407 406
408 407
409 408
410 409
411 410
412 411
413 412
414 413
415 414
416 415
417 416
418 417
419 418
420 419
421 420
422 421
423 422
424 423
425 424
426 425
427 426
428 427
429 428
430 429
431 430