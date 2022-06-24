/* Included by resamplesubs.c */
#define SMALL_FILTER_NMULT ((HWORD)13)
#define SMALL_FILTER_SCALE 13128 /* Unity-gain scale factor */  //13128/16384 = 0.80126953125
#define SMALL_FILTER_NWING 1536 /* Filter table length */
static HWORD SMALL_FILTER_IMP[] /* Impulse response */ = {   // 16 : 1.0.15
32767,
32766,
32764,
32760,
32755,
32749,
32741,
32731,
32721,
32708,
32695,
32679,
32663,
32645,
32625,
32604,
32582,
32558,
32533,
32506,
32478,
32448,
32417,
32385,
32351,
32316,
32279,
32241,
32202,
32161,
32119,
32075,
32030,
31984,
31936,
31887,
31836,
31784,
31731,
31676,
31620,
31563,
31504,
31444,
31383,
31320,
31256,
31191,
31124,
31056,
30987,
30916,
30845,
30771,
30697,
30621,
30544,
30466,
30387,
30306,
30224,
30141,
30057,
29971,
29884,
29796,
29707,
29617,
29525,
29433,
29339,
29244,
29148,
29050,
28952,
28852,
28752,
28650,
28547,
28443,
28338,
28232,
28125,
28017,
27908,
27797,
27686,
27574,
27461,
27346,
27231,
27115,
26998,
26879,
26760,
26640,
26519,
26398,
26275,
26151,
26027,
25901,
25775,
25648,
25520,
25391,
25262,
25131,
25000,
24868,
24735,
24602,
24467,
24332,
24197,
24060,
23923,
23785,
23647,
23507,
23368,
23227,
23086,
22944,
22802,
22659,
22515,
22371,
22226,
22081,
21935,
21789,
21642,
21494,
21346,
21198,
21049,
20900,
20750,
20600,
20449,
20298,
20146,
19995,
19842,
19690,
19537,
19383,
19230,
19076,
18922,
18767,
18612,
18457,
18302,
18146,
17990,
17834,
17678,
17521,
17365,
17208,
17051,
16894,
16737,
16579,
16422,
16264,
16106,
15949,
15791,
15633,
15475,
15317,
15159,
15001,
14843,
14685,
14527,
14369,
14212,
14054,
13896,
13739,
13581,
13424,
13266,
13109,
12952,
12795,
12639,
12482,
12326,
12170,
12014,
11858,
11703,
11548,
11393,
11238,
11084,
10929,
10776,
10622,
10469,
10316,
10164,
10011,
9860,
9708,
9557,
9407,
9256,
9106,
8957,
8808,
8659,
8511,
8364,
8216,
8070,
7924,
7778,
7633,
7488,
7344,
7200,
7057,
6914,
6773,
6631,
6490,
6350,
6210,
6071,
5933,
5795,
5658,
5521,
5385,
5250,
5115,
4981,
4848,
4716,
4584,
4452,
4322,
4192,
4063,
3935,
3807,
3680,
3554,
3429,
3304,
3180,
3057,
2935,
2813,
2692,
2572,
2453,
2335,
2217,
2101,
1985,
1870,
1755,
1642,
1529,
1418,
1307,
1197,
1088,
979,
872,
765,
660,
555,
451,
348,
246,
145,
44,
-54,
-153,
-250,
-347,
-443,
-537,
-631,
-724,
-816,
-908,
-998,
-1087,
-1175,
-1263,
-1349,
-1435,
-1519,
-1603,
-1685,
-1767,
-1848,
-1928,
-2006,
-2084,
-2161,
-2237,
-2312,
-2386,
-2459,
-2531,
-2603,
-2673,
-2742,
-2810,
-2878,
-2944,
-3009,
-3074,
-3137,
-3200,
-3261,
-3322,
-3381,
-3440,
-3498,
-3554,
-3610,
-3665,
-3719,
-3772,
-3824,
-3875,
-3925,
-3974,
-4022,
-4069,
-4116,
-4161,
-4205,
-4249,
-4291,
-4333,
-4374,
-4413,
-4452,
-4490,
-4527,
-4563,
-4599,
-4633,
-4666,
-4699,
-4730,
-4761,
-4791,
-4820,
-4848,
-4875,
-4901,
-4926,
-4951,
-4974,
-4997,
-5019,
-5040,
-5060,
-5080,
-5098,
-5116,
-5133,
-5149,
-5164,
-5178,
-5192,
-5205,
-5217,
-5228,
-5238,
-5248,
-5257,
-5265,
-5272,
-5278,
-5284,
-5289,
-5293,
-5297,
-5299,
-5301,
-5303,
-5303,
-5303,
-5302,
-5300,
-5298,
-5295,
-5291,
-5287,
-5282,
-5276,
-5270,
-5263,
-5255,
-5246,
-5237,
-5228,
-5217,
-5206,
-5195,
-5183,
-5170,
-5157,
-5143,
-5128,
-5113,
-5097,
-5081,
-5064,
-5047,
-5029,
-5010,
-4991,
-4972,
-4952,
-4931,
-4910,
-4889,
-4867,
-4844,
-4821,
-4797,
-4774,
-4749,
-4724,
-4699,
-4673,
-4647,
-4620,
-4593,
-4566,
-4538,
-4510,
-4481,
-4452,
-4422,
-4393,
-4363,
-4332,
-4301,
-4270,
-4238,
-4206,
-4174,
-4142,
-4109,
-4076,
-4042,
-4009,
-3975,
-3940,
-3906,
-3871,
-3836,
-3801,
-3765,
-3729,
-3693,
-3657,
-3620,
-3584,
-3547,
-3510,
-3472,
-3435,
-3397,
-3360,
-3322,
-3283,
-3245,
-3207,
-3168,
-3129,
-3091,
-3052,
-3013,
-2973,
-2934,
-2895,
-2855,
-2816,
-2776,
-2736,
-2697,
-2657,
-2617,
-2577,
-2537,
-2497,
-2457,
-2417,
-2377,
-2337,
-2297,
-2256,
-2216,
-2176,
-2136,
-2096,
-2056,
-2016,
-1976,
-1936,
-1896,
-1856,
-1817,
-1777,
-1737,
-1698,
-1658,
-1619,
-1579,
-1540,
-1501,
-1462,
-1423,
-1384,
-1345,
-1306,
-1268,
-1230,
-1191,
-1153,
-1115,
-1077,
-1040,
-1002,
-965,
-927,
-890,
-854,
-817,
-780,
-744,
-708,
-672,
-636,
-600,
-565,
-530,
-494,
-460,
-425,
-391,
-356,
-322,
-289,
-255,
-222,
-189,
-156,
-123,
-91,
-59,
-27,
4,
35,
66,
97,
127,
158,
188,
218,
247,
277,
306,
334,
363,
391,
419,
447,
474,
501,
528,
554,
581,
606,
632,
657,
683,
707,
732,
756,
780,
803,
827,
850,
872,
895,
917,
939,
960,
981,
1002,
1023,
1043,
1063,
1082,
1102,
1121,
1139,
1158,
1176,
1194,
1211,
1228,
1245,
1262,
1278,
1294,
1309,
1325,
1340,
1354,
1369,
1383,
1397,
1410,
1423,
1436,
1448,
1461,
1473,
1484,
1496,
1507,
1517,
1528,
1538,
1548,
1557,
1566,
1575,
1584,
1592,
1600,
1608,
1616,
1623,
1630,
1636,
1643,
1649,
1654,
1660,
1665,
1670,
1675,
1679,
1683,
1687,
1690,
1694,
1697,
1700,
1702,
1704,
1706,
1708,
1709,
1711,
1712,
1712,
1713,
1713,
1713,
1713,
1712,
1711,
1710,
1709,
1708,
1706,
1704,
1702,
1700,
1697,
1694,
1691,
1688,
1685,
1681,
1677,
1673,
1669,
1664,
1660,
1655,
1650,
1644,
1639,
1633,
1627,
1621,
1615,
1609,
1602,
1596,
1589,
1582,
1575,
1567,
1560,
1552,
1544,
1536,
1528,
1520,
1511,
1503,
1494,
1485,
1476,
1467,
1458,
1448,
1439,
1429,
1419,
1409,
1399,
1389,
1379,
1368,
1358,
1347,
1337,
1326,
1315,
1304,
1293,
1282,
1271,
1260,
1248,
1237,
1225,
1213,
1202,
1190,
1178,
1166,
1154,
1142,
1130,
1118,
1106,
1094,
1081,
1069,
1057,
1044,
1032,
1019,
1007,
994,
981,
969,
956,
943,
931,
918,
905,
892,
879,
867,
854,
841,
828,
815,
802,
790,
777,
764,
751,
738,
725,
713,
700,
687,
674,
662,
649,
636,
623,
611,
598,
585,
573,
560,
548,
535,
523,
510,
498,
486,
473,
461,
449,
437,
425,
413,
401,
389,
377,
365,
353,
341,
330,
318,
307,
295,
284,
272,
261,
250,
239,
228,
217,
206,
195,
184,
173,
163,
152,
141,
131,
121,
110,
100,
90,
80,
70,
60,
51,
41,
31,
22,
12,
3,
-5,
-14,
-23,
-32,
-41,
-50,
-59,
-67,
-76,
-84,
-93,
-101,
-109,
-117,
-125,
-133,
-140,
-148,
-156,
-163,
-170,
-178,
-185,
-192,
-199,
-206,
-212,
-219,
-226,
-232,
-239,
-245,
-251,
-257,
-263,
-269,
-275,
-280,
-286,
-291,
-297,
-302,
-307,
-312,
-317,
-322,
-327,
-332,
-336,
-341,
-345,
-349,
-354,
-358,
-362,
-366,
-369,
-373,
-377,
-380,
-384,
-387,
-390,
-394,
-397,
-400,
-402,
-405,
-408,
-411,
-413,
-416,
-418,
-420,
-422,
-424,
-426,
-428,
-430,
-432,
-433,
-435,
-436,
-438,
-439,
-440,
-442,
-443,
-444,
-445,
-445,
-446,
-447,
-447,
-448,
-448,
-449,
-449,
-449,
-449,
-449,
-449,
-449,
-449,
-449,
-449,
-449,
-448,
-448,
-447,
-447,
-446,
-445,
-444,
-443,
-443,
-442,
-441,
-440,
-438,
-437,
-436,
-435,
-433,
-432,
-430,
-429,
-427,
-426,
-424,
-422,
-420,
-419,
-417,
-415,
-413,
-411,
-409,
-407,
-405,
-403,
-400,
-398,
-396,
-393,
-391,
-389,
-386,
-384,
-381,
-379,
-376,
-374,
-371,
-368,
-366,
-363,
-360,
-357,
-355,
-352,
-349,
-346,
-343,
-340,
-337,
-334,
-331,
-328,
-325,
-322,
-319,
-316,
-313,
-310,
-307,
-304,
-301,
-298,
-294,
-291,
-288,
-285,
-282,
-278,
-275,
-272,
-269,
-265,
-262,
-259,
-256,
-252,
-249,
-246,
-243,
-239,
-236,
-233,
-230,
-226,
-223,
-220,
-217,
-213,
-210,
-207,
-204,
-200,
-197,
-194,
-191,
-187,
-184,
-181,
-178,
-175,
-172,
-168,
-165,
-162,
-159,
-156,
-153,
-150,
-147,
-143,
-140,
-137,
-134,
-131,
-128,
-125,
-122,
-120,
-117,
-114,
-111,
-108,
-105,
-102,
-99,
-97,
-94,
-91,
-88,
-86,
-83,
-80,
-78,
-75,
-72,
-70,
-67,
-65,
-62,
-59,
-57,
-55,
-52,
-50,
-47,
-45,
-43,
-40,
-38,
-36,
-33,
-31,
-29,
-27,
-25,
-22,
-20,
-18,
-16,
-14,
-12,
-10,
-8,
-6,
-4,
-2,
0,
0,
2,
4,
6,
8,
9,
11,
13,
14,
16,
17,
19,
21,
22,
24,
25,
27,
28,
29,
31,
32,
33,
35,
36,
37,
38,
40,
41,
42,
43,
44,
45,
46,
47,
48,
49,
50,
51,
52,
53,
54,
55,
56,
56,
57,
58,
59,
59,
60,
61,
62,
62,
63,
63,
64,
64,
65,
66,
66,
66,
67,
67,
68,
68,
69,
69,
69,
70,
70,
70,
70,
71,
71,
71,
71,
71,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
72,
71,
71,
71,
71,
71,
70,
70,
70,
70,
69,
69,
69,
69,
68,
68,
68,
67,
67,
67,
66,
66,
66,
65,
65,
64,
64,
64,
63,
63,
62,
62,
62,
61,
61,
60,
60,
59,
59,
58,
58,
58,
57,
57,
56,
56,
55,
55,
54,
54,
53,
53,
52,
52,
51,
51,
50,
50,
49,
48,
48,
47,
47,
46,
46,
45,
45,
44,
44,
43,
43,
42,
42,
41,
41,
40,
39,
39,
38,
38,
37,
37,
36,
36,
35,
35,
34,
34,
33,
33,
32,
32,
31,
31,
30,
30,
29,
29,
28,
28,
27,
27,
26,
26,
25,
25,
24,
24,
23,
23,
23,
22,
22,
21,
21,
20,
20,
20,
19,
19,
18,
18,
17,
17,
17,
16,
16,
15,
15,
15,
14,
14,
14,
13,
13,
12,
12,
12,
11,
11,
11,
10,
10,
10,
9,
9,
9,
9,
8,
8,
8,
7,
7,
7,
7,
6,
6,
6,
6,
5,
5,
5,
5,
4,
4,
4,
4,
3,
3,
3,
3,
3,
2,
2,
2,
2,
2,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1
};

static HWORD SMALL_FILTER_IMPD[] = {
-1,
-2,
-4,
-5,
-6,
-8,
-10,
-10,
-13,
-13,
-16,
-16,
-18,
-20,
-21,
-22,
-24,
-25,
-27,
-28,
-30,
-31,
-32,
-34,
-35,
-37,
-38,
-39,
-41,
-42,
-44,
-45,
-46,
-48,
-49,
-51,
-52,
-53,
-55,
-56,
-57,
-59,
-60,
-61,
-63,
-64,
-65,
-67,
-68,
-69,
-71,
-71,
-74,
-74,
-76,
-77,
-78,
-79,
-81,
-82,
-83,
-84,
-86,
-87,
-88,
-89,
-90,
-92,
-92,
-94,
-95,
-96,
-98,
-98,
-100,
-100,
-102,
-103,
-104,
-105,
-106,
-107,
-108,
-109,
-111,
-111,
-112,
-113,
-115,
-115,
-116,
-117,
-119,
-119,
-120,
-121,
-121,
-123,
-124,
-124,
-126,
-126,
-127,
-128,
-129,
-129,
-131,
-131,
-132,
-133,
-133,
-135,
-135,
-135,
-137,
-137,
-138,
-138,
-140,
-139,
-141,
-141,
-142,
-142,
-143,
-144,
-144,
-145,
-145,
-146,
-146,
-147,
-148,
-148,
-148,
-149,
-149,
-150,
-150,
-151,
-151,
-152,
-151,
-153,
-152,
-153,
-154,
-153,
-154,
-154,
-155,
-155,
-155,
-155,
-156,
-156,
-156,
-156,
-157,
-156,
-157,
-157,
-157,
-157,
-158,
-157,
-158,
-158,
-157,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-157,
-158,
-158,
-157,
-158,
-157,
-158,
-157,
-157,
-157,
-156,
-157,
-156,
-156,
-156,
-156,
-155,
-155,
-155,
-155,
-154,
-155,
-153,
-154,
-153,
-153,
-152,
-153,
-151,
-152,
-151,
-150,
-151,
-150,
-149,
-149,
-149,
-148,
-147,
-148,
-146,
-146,
-146,
-145,
-145,
-144,
-144,
-143,
-143,
-141,
-142,
-141,
-140,
-140,
-139,
-138,
-138,
-137,
-137,
-136,
-135,
-135,
-134,
-133,
-132,
-132,
-132,
-130,
-130,
-129,
-128,
-128,
-127,
-126,
-125,
-125,
-124,
-123,
-122,
-122,
-121,
-120,
-119,
-118,
-118,
-116,
-116,
-115,
-115,
-113,
-113,
-111,
-111,
-110,
-109,
-109,
-107,
-107,
-105,
-105,
-104,
-103,
-102,
-101,
-101,
-98,
-99,
-97,
-97,
-96,
-94,
-94,
-93,
-92,
-92,
-90,
-89,
-88,
-88,
-86,
-86,
-84,
-84,
-82,
-82,
-81,
-80,
-78,
-78,
-77,
-76,
-75,
-74,
-73,
-72,
-72,
-70,
-69,
-68,
-68,
-66,
-65,
-65,
-63,
-63,
-61,
-61,
-59,
-59,
-58,
-56,
-56,
-55,
-54,
-53,
-52,
-51,
-50,
-49,
-48,
-47,
-47,
-45,
-44,
-44,
-42,
-42,
-41,
-39,
-39,
-38,
-37,
-36,
-36,
-34,
-33,
-33,
-31,
-31,
-30,
-29,
-28,
-27,
-26,
-25,
-25,
-23,
-23,
-22,
-21,
-20,
-20,
-18,
-18,
-17,
-16,
-15,
-14,
-14,
-13,
-12,
-11,
-10,
-10,
-9,
-8,
-7,
-6,
-6,
-5,
-4,
-4,
-2,
-2,
-2,
0,
0,
1,
2,
2,
3,
4,
4,
5,
6,
6,
7,
8,
9,
9,
9,
11,
11,
11,
12,
13,
13,
14,
15,
15,
16,
16,
17,
17,
18,
19,
19,
19,
20,
21,
21,
21,
22,
23,
23,
24,
23,
25,
25,
25,
26,
26,
27,
27,
27,
28,
28,
29,
29,
30,
29,
30,
31,
31,
31,
32,
32,
32,
32,
33,
33,
34,
33,
34,
35,
34,
35,
35,
35,
36,
36,
36,
36,
37,
36,
37,
37,
38,
37,
38,
37,
38,
39,
38,
38,
39,
39,
38,
39,
39,
40,
39,
39,
40,
39,
40,
40,
39,
40,
40,
40,
40,
40,
40,
40,
40,
40,
40,
41,
40,
40,
40,
40,
40,
40,
40,
40,
40,
40,
39,
40,
40,
39,
40,
39,
40,
39,
39,
39,
39,
39,
39,
39,
38,
38,
39,
38,
38,
38,
37,
38,
37,
38,
37,
36,
37,
37,
36,
36,
36,
36,
36,
35,
35,
36,
34,
35,
34,
35,
34,
33,
34,
33,
33,
33,
33,
32,
32,
32,
31,
31,
31,
31,
30,
31,
30,
30,
29,
30,
29,
28,
29,
28,
28,
28,
27,
27,
27,
26,
27,
25,
26,
25,
26,
24,
25,
24,
24,
23,
24,
23,
22,
23,
22,
22,
21,
21,
21,
21,
20,
20,
19,
20,
19,
18,
19,
18,
18,
17,
17,
17,
17,
16,
16,
15,
16,
15,
14,
15,
14,
14,
13,
13,
13,
12,
13,
12,
11,
12,
11,
10,
11,
10,
10,
9,
9,
9,
9,
8,
8,
8,
8,
7,
7,
6,
7,
6,
5,
6,
5,
5,
5,
4,
4,
4,
3,
4,
3,
3,
2,
2,
2,
2,
1,
2,
1,
0,
1,
0,
0,
0,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-3,
-3,
-3,
-3,
-3,
-4,
-4,
-4,
-4,
-5,
-4,
-5,
-5,
-6,
-5,
-6,
-6,
-6,
-6,
-6,
-7,
-6,
-7,
-7,
-7,
-8,
-7,
-8,
-8,
-8,
-8,
-8,
-9,
-8,
-9,
-9,
-9,
-9,
-9,
-10,
-9,
-10,
-10,
-10,
-10,
-10,
-10,
-11,
-10,
-11,
-10,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-12,
-11,
-12,
-12,
-11,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-13,
-12,
-12,
-13,
-12,
-13,
-12,
-13,
-13,
-12,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-12,
-13,
-13,
-12,
-13,
-12,
-13,
-12,
-13,
-12,
-12,
-13,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-11,
-12,
-11,
-12,
-11,
-12,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-10,
-11,
-11,
-10,
-10,
-11,
-10,
-10,
-10,
-10,
-10,
-9,
-10,
-10,
-9,
-10,
-9,
-8,
-9,
-9,
-9,
-9,
-9,
-9,
-8,
-9,
-8,
-9,
-8,
-8,
-8,
-8,
-8,
-7,
-8,
-8,
-7,
-7,
-8,
-7,
-7,
-7,
-7,
-6,
-7,
-7,
-6,
-7,
-6,
-6,
-6,
-6,
-6,
-6,
-5,
-6,
-5,
-6,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-4,
-5,
-4,
-4,
-5,
-4,
-4,
-4,
-3,
-4,
-4,
-3,
-4,
-3,
-3,
-4,
-3,
-3,
-2,
-3,
-3,
-3,
-2,
-3,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
-1,
-2,
-1,
-1,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
2,
1,
1,
1,
2,
1,
2,
1,
2,
1,
2,
2,
2,
1,
2,
2,
2,
2,
2,
2,
2,
2,
3,
2,
2,
3,
2,
2,
3,
2,
3,
2,
3,
2,
3,
3,
2,
3,
3,
3,
2,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
3,
3,
3,
2,
3,
3,
3,
3,
3,
3,
3,
2,
3,
3,
3,
2,
3,
3,
2,
3,
3,
2,
3,
2,
3,
3,
2,
2,
3,
2,
3,
2,
2,
3,
2,
2,
3,
2,
2,
2,
2,
3,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
0,
2,
2,
2,
2,
1,
2,
2,
1,
2,
1,
2,
2,
1,
2,
1,
2,
1,
1,
2,
1,
1,
2,
1,
1,
1,
2,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
0,
1,
1,
0,
0,
1,
0,
1,
0,
1,
0,
0,
1,
0,
0,
0,
1,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
-1,
-2,
-4,
-5,
-6,
-8,
-10,
-10,
-13,
-13,
-16,
-16,
-18,
-20,
-21,
-22,
-24,
-25,
-27,
-28,
-30,
-31,
-32,
-34,
-35,
-37,
-38,
-39,
-41,
-42,
-44,
-45,
-46,
-48,
-49,
-51,
-52,
-53,
-55,
-56,
-57,
-59,
-60,
-61,
-63,
-64,
-65,
-67,
-68,
-69,
-71,
-71,
-74,
-74,
-76,
-77,
-78,
-79,
-81,
-82,
-83,
-84,
-86,
-87,
-88,
-89,
-90,
-92,
-92,
-94,
-95,
-96,
-98,
-98,
-100,
-100,
-102,
-103,
-104,
-105,
-106,
-107,
-108,
-109,
-111,
-111,
-112,
-113,
-115,
-115,
-116,
-117,
-119,
-119,
-120,
-121,
-121,
-123,
-124,
-124,
-126,
-126,
-127,
-128,
-129,
-129,
-131,
-131,
-132,
-133,
-133,
-135,
-135,
-135,
-137,
-137,
-138,
-138,
-140,
-139,
-141,
-141,
-142,
-142,
-143,
-144,
-144,
-145,
-145,
-146,
-146,
-147,
-148,
-148,
-148,
-149,
-149,
-150,
-150,
-151,
-151,
-152,
-151,
-153,
-152,
-153,
-154,
-153,
-154,
-154,
-155,
-155,
-155,
-155,
-156,
-156,
-156,
-156,
-157,
-156,
-157,
-157,
-157,
-157,
-158,
-157,
-158,
-158,
-157,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-158,
-157,
-158,
-158,
-157,
-158,
-157,
-158,
-157,
-157,
-157,
-156,
-157,
-156,
-156,
-156,
-156,
-155,
-155,
-155,
-155,
-154,
-155,
-153,
-154,
-153,
-153,
-152,
-153,
-151,
-152,
-151,
-150,
-151,
-150,
-149,
-149,
-149,
-148,
-147,
-148,
-146,
-146,
-146,
-145,
-145,
-144,
-144,
-143,
-143,
-141,
-142,
-141,
-140,
-140,
-139,
-138,
-138,
-137,
-137,
-136,
-135,
-135,
-134,
-133,
-132,
-132,
-132,
-130,
-130,
-129,
-128,
-128,
-127,
-126,
-125,
-125,
-124,
-123,
-122,
-122,
-121,
-120,
-119,
-118,
-118,
-116,
-116,
-115,
-115,
-113,
-113,
-111,
-111,
-110,
-109,
-109,
-107,
-107,
-105,
-105,
-104,
-103,
-102,
-101,
-101,
-98,
-99,
-97,
-97,
-96,
-94,
-94,
-93,
-92,
-92,
-90,
-89,
-88,
-88,
-86,
-86,
-84,
-84,
-82,
-82,
-81,
-80,
-78,
-78,
-77,
-76,
-75,
-74,
-73,
-72,
-72,
-70,
-69,
-68,
-68,
-66,
-65,
-65,
-63,
-63,
-61,
-61,
-59,
-59,
-58,
-56,
-56,
-55,
-54,
-53,
-52,
-51,
-50,
-49,
-48,
-47,
-47,
-45,
-44,
-44,
-42,
-42,
-41,
-39,
-39,
-38,
-37,
-36,
-36,
-34,
-33,
-33,
-31,
-31,
-30,
-29,
-28,
-27,
-26,
-25,
-25,
-23,
-23,
-22,
-21,
-20,
-20,
-18,
-18,
-17,
-16,
-15,
-14,
-14,
-13,
-12,
-11,
-10,
-10,
-9,
-8,
-7,
-6,
-6,
-5,
-4,
-4,
-2,
-2,
-2,
0,
0,
1,
2,
2,
3,
4,
4,
5,
6,
6,
7,
8,
9,
9,
9,
11,
11,
11,
12,
13,
13,
14,
15,
15,
16,
16,
17,
17,
18,
19,
19,
19,
20,
21,
21,
21,
22,
23,
23,
24,
23,
25,
25,
25,
26,
26,
27,
27,
27,
28,
28,
29,
29,
30,
29,
30,
31,
31,
31,
32,
32,
32,
32,
33,
33,
34,
33,
34,
35,
34,
35,
35,
35,
36,
36,
36,
36,
37,
36,
37,
37,
38,
37,
38,
37,
38,
39,
38,
38,
39,
39,
38,
39,
39,
40,
39,
39,
40,
39,
40,
40,
39,
40,
40,
40,
40,
40,
40,
40,
40,
40,
40,
41,
40,
40,
40,
40,
40,
40,
40,
40,
40,
40,
39,
40,
40,
39,
40,
39,
40,
39,
39,
39,
39,
39,
39,
39,
38,
38,
39,
38,
38,
38,
37,
38,
37,
38,
37,
36,
37,
37,
36,
36,
36,
36,
36,
35,
35,
36,
34,
35,
34,
35,
34,
33,
34,
33,
33,
33,
33,
32,
32,
32,
31,
31,
31,
31,
30,
31,
30,
30,
29,
30,
29,
28,
29,
28,
28,
28,
27,
27,
27,
26,
27,
25,
26,
25,
26,
24,
25,
24,
24,
23,
24,
23,
22,
23,
22,
22,
21,
21,
21,
21,
20,
20,
19,
20,
19,
18,
19,
18,
18,
17,
17,
17,
17,
16,
16,
15,
16,
15,
14,
15,
14,
14,
13,
13,
13,
12,
13,
12,
11,
12,
11,
10,
11,
10,
10,
9,
9,
9,
9,
8,
8,
8,
8,
7,
7,
6,
7,
6,
5,
6,
5,
5,
5,
4,
4,
4,
3,
4,
3,
3,
2,
2,
2,
2,
1,
2,
1,
0,
1,
0,
0,
0,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-3,
-3,
-3,
-3,
-3,
-4,
-4,
-4,
-4,
-5,
-4,
-5,
-5,
-6,
-5,
-6,
-6,
-6,
-6,
-6,
-7,
-6,
-7,
-7,
-7,
-8,
-7,
-8,
-8,
-8,
-8,
-8,
-9,
-8,
-9,
-9,
-9,
-9,
-9,
-10,
-9,
-10,
-10,
-10,
-10,
-10,
-10,
-11,
-10,
-11,
-10,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-12,
-11,
-12,
-12,
-11,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-13,
-12,
-12,
-13,
-12,
-13,
-12,
-13,
-13,
-12,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-12,
-13,
-13,
-13,
-12,
-13,
-13,
-12,
-13,
-12,
-13,
-12,
-13,
-12,
-12,
-13,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-12,
-11,
-12,
-11,
-12,
-11,
-12,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-11,
-10,
-11,
-11,
-10,
-10,
-11,
-10,
-10,
-10,
-10,
-10,
-9,
-10,
-10,
-9,
-10,
-9,
-8,
-9,
-9,
-9,
-9,
-9,
-9,
-8,
-9,
-8,
-9,
-8,
-8,
-8,
-8,
-8,
-7,
-8,
-8,
-7,
-7,
-8,
-7,
-7,
-7,
-7,
-6,
-7,
-7,
-6,
-7,
-6,
-6,
-6,
-6,
-6,
-6,
-5,
-6,
-5,
-6,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-4,
-5,
-4,
-4,
-5,
-4,
-4,
-4,
-3,
-4,
-4,
-3,
-4,
-3,
-3,
-4,
-3,
-3,
-2,
-3,
-3,
-3,
-2,
-3,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
-1,
-2,
-1,
-1,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
2,
1,
1,
1,
2,
1,
2,
1,
2,
1,
2,
2,
2,
1,
2,
2,
2,
2,
2,
2,
2,
2,
3,
2,
2,
3,
2,
2,
3,
2,
3,
2,
3,
2,
3,
3,
2,
3,
3,
3,
2,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
4,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
3,
3,
3,
4,
3,
3,
3,
3,
3,
3,
3,
2,
3,
3,
3,
3,
3,
3,
3,
2,
3,
3,
3,
2,
3,
3,
2,
3,
3,
2,
3,
2,
3,
3,
2,
2,
3,
2,
3,
2,
2,
3,
2,
2,
3,
2,
2,
2,
2,
3,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
0,
2,
2,
2,
2,
1,
2,
2,
1,
2,
1,
2,
2,
1,
2,
1,
2,
1,
1,
2,
1,
1,
2,
1,
1,
1,
2,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
0,
1,
1,
0,
0,
1,
0,
1,
0,
1,
0,
0,
1,
0,
0,
0,
1,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1
};

