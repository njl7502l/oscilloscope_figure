#ifndef Hormone_h
#define Hormone_h
#include <Arduino.h>

double Hormone_x(double t){
    return 1571.96 - 7.65936 * cos(t) - 46.415 * cos(2 * t) - 36.5142 * cos(3 * t) +  27.0485 * cos(4 * t) - 12.4205 * cos(5 * t) - 0.185549 * cos(6 * t) -  2.06543 * cos(7 * t) - 17.7881 * cos(8 * t) - 15.5838 * cos(9 * t) +  1.6419 * cos(10 * t) + 5.54744 * cos(11 * t) - 1.65069 * cos(12 * t) +  12.1436 * cos(13 * t) + 11.1324 * cos(14 * t) + 6.64118 * cos(15 * t) -  6.83883 * cos(16 * t) - 2.41725 * cos(17 * t) - 8.67006 * cos(18 * t) +  3.64632 * cos(19 * t) - 1.73151 * cos(20 * t) + 0.0354296 * cos(21 * t) +  0.113933 * cos(22 * t) - 1.86785 * cos(23 * t) - 2.32373 * cos(24 * t) +  7.23227 * cos(25 * t) + 3.15248 * cos(26 * t) - 5.32551 * cos(27 * t) +  0.185229 * cos(28 * t) - 2.62476 * cos(29 * t) + 3.9518 * cos(30 * t) +  2.00839 * cos(31 * t) - 2.97602 * cos(32 * t) + 2.38907 * cos(33 * t) -  0.352468 * cos(34 * t) - 0.27408 * cos(35 * t) + 1.02126 * cos(36 * t) -  0.550964 * cos(37 * t) + 2.87076 * cos(38 * t) + 0.928932 * cos(39 * t) +  2.42012 * cos(40 * t) - 1.91737 * cos(41 * t) + 2.80635 * cos(42 * t) +  0.067956 * cos(43 * t) + 0.782791 * cos(44 * t) + 0.458097 * cos(45 * t) -  1.01335 * cos(46 * t) + 0.29365 * cos(47 * t) + 0.627065 * cos(48 * t) +  0.656664 * cos(49 * t) + 0.258704 * cos(50 * t) + 0.211006 * cos(51 * t) +  0.300757 * cos(52 * t) + 0.0881291 * cos(53 * t) - 0.640207 * cos(54 * t) +  0.3695 * cos(55 * t) + 0.552222 * cos(56 * t) - 1.14067 * cos(57 * t) +  0.687025 * cos(58 * t) - 0.422602 * cos(59 * t) + 0.320915 * cos(60 * t) -  0.578911 * cos(61 * t) + 0.184639 * cos(62 * t) + 0.15627 * cos(63 * t) -  1.01136 * cos(64 * t) + 0.796118 * cos(65 * t) + 0.512657 * cos(66 * t) -  0.832927 * cos(67 * t) + 0.311511 * cos(68 * t) + 0.272926 * cos(69 * t) +  0.596115 * cos(70 * t) - 0.667106 * cos(71 * t) + 0.219882 * cos(72 * t) -  0.173548 * cos(73 * t) - 0.0490327 * cos(74 * t) + 0.0695734 * cos(75 * t) +  0.764023 * cos(76 * t) - 0.474992 * cos(77 * t) + 0.259907 * cos(78 * t) +  0.201217 * cos(79 * t) + 0.0775565 * cos(80 * t) - 0.303411 * cos(81 * t) -  0.0195312 * cos(82 * t) + 0.168571 * cos(83 * t) + 0.108727 * cos(84 * t) -  0.530507 * cos(85 * t) + 0.0808764 * cos(86 * t) + 0.199519 * cos(87 * t) -  0.295994 * cos(88 * t) + 0.183228 * cos(89 * t) + 0.0239624 * cos(90 * t) -  0.296256 * cos(91 * t) + 0.409882 * cos(92 * t) - 0.381738 * cos(93 * t) +  0.200325 * cos(94 * t) + 0.200473 * cos(95 * t) - 0.269708 * cos(96 * t) +  0.0558301 * cos(97 * t) - 0.00946914 * cos(98 * t) - 0.0137155 * cos(99 * t) +  0.0569788 * cos(100 * t) - 0.180597 * cos(101 * t) + 0.0596604 * cos(102 * t) +  0.134179 * cos(103 * t) - 0.022738 * cos(104 * t) - 0.0989934 * cos(105 * t) +  0.106956 * cos(106 * t) - 0.171341 * cos(107 * t) + 0.262573 * cos(108 * t) -  0.331346 * cos(109 * t) + 0.135693 * cos(110 * t) - 0.199261 * cos(111 * t) +  0.184245 * cos(112 * t) - 0.0454677 * cos(113 * t) - 0.1631 * cos(114 * t) +  0.0717327 * cos(115 * t) + 0.0424607 * cos(116 * t) - 0.0607609 * cos(117 * t) -  0.00699931 * cos(118 * t) - 0.0430153 * cos(119 * t) -  0.0250251 * cos(120 * t) + 0.0647893 * cos(121 * t) - 0.0735089 * cos(122 * t) -  0.0477124 * cos(123 * t) - 0.0109987 * cos(124 * t) - 0.0190749 * cos(125 * t) +  0.129527 * cos(126 * t) - 0.190464 * cos(127 * t) - 0.0484118 * cos(128 * t) +  0.127516 * cos(129 * t) - 0.184461 * cos(130 * t) + 0.105785 * cos(131 * t) -  0.170486 * cos(132 * t) + 0.0305878 * cos(133 * t) + 0.0216562 * cos(134 * t) -  0.0234439 * cos(135 * t) + 0.0436678 * cos(136 * t) + 0.024269 * cos(137 * t) -  0.0161896 * cos(138 * t) + 0.144802 * cos(139 * t) - 0.150351 * cos(140 * t) -  0.0642839 * cos(141 * t) + 0.116659 * cos(142 * t) + 0.0102182 * cos(143 * t) -  0.122166 * cos(144 * t) - 0.0460986 * cos(145 * t) + 0.0201303 * cos(146 * t) +  0.07839 * cos(147 * t) + 0.0376437 * cos(148 * t) - 0.0623678 * cos(149 * t) +  0.00227925 * cos(150 * t) + 0.00514378 * cos(151 * t) -  0.0448549 * cos(152 * t) + 0.096666 * cos(153 * t) - 0.10744 * cos(154 * t) +  0.0487102 * cos(155 * t) - 0.0150876 * cos(156 * t) - 0.040841 * cos(157 * t) -  0.0346941 * cos(158 * t) - 0.023635 * cos(159 * t) + 0.0980283 * cos(160 * t) -  0.0122951 * cos(161 * t) - 0.059328 * cos(162 * t) + 0.0317251 * cos(163 * t) -  0.00136411 * cos(164 * t) + 0.155728 * cos(165 * t) - 0.0940024 * cos(166 * t) +  0.105834 * cos(167 * t) - 0.0593075 * cos(168 * t) + 0.068006 * cos(169 * t) -  0.065193 * cos(170 * t) + 0.194091 * cos(171 * t) - 0.0409445 * cos(172 * t) +  0.172575 * cos(173 * t) - 0.0427866 * cos(174 * t) + 0.0448651 * cos(175 * t) +  0.0162215 * cos(176 * t) - 0.0693077 * cos(177 * t) + 0.0290216 * cos(178 * t) -  0.0909601 * cos(179 * t) - 0.00693833 * cos(180 * t) +  0.00870855 * cos(181 * t) - 0.1123 * cos(182 * t) - 0.0330076 * cos(183 * t) -  0.160632 * cos(184 * t) + 0.0180898 * cos(185 * t) - 0.0047685 * cos(186 * t) -  0.081226 * cos(187 * t) - 0.00599022 * cos(188 * t) - 0.117004 * cos(189 * t) +  0.0533417 * cos(190 * t) - 0.0694407 * cos(191 * t) + 0.0076351 * cos(192 * t) -  0.110963 * cos(193 * t) - 0.0349828 * cos(194 * t) - 0.120669 * cos(195 * t) +  0.0432528 * cos(196 * t) - 0.142627 * cos(197 * t) + 0.0373511 * cos(198 * t) -  0.00331915 * cos(199 * t) - 0.00767849 * cos(200 * t) - 0.398532 * sin(t) -  1.50465 * sin(2 * t) - 0.894768 * sin(3 * t) + 0.69768 * sin(4 * t) -  0.237427 * sin(5 * t) - 0.354521 * sin(6 * t) - 0.553487 * sin(7 * t) -  1.71986 * sin(8 * t) - 1.68728 * sin(9 * t) - 0.0527701 * sin(10 * t) +  0.314434 * sin(11 * t) + 0.430072 * sin(12 * t) + 1.96118 * sin(13 * t) +  2.22695 * sin(14 * t) + 1.11348 * sin(15 * t) - 0.727919 * sin(16 * t) -  1.45241 * sin(17 * t) - 1.37784 * sin(18 * t) + 0.213141 * sin(19 * t) +  0.201258 * sin(20 * t) - 0.10264 * sin(21 * t) - 0.457449 * sin(22 * t) -  0.763472 * sin(23 * t) + 0.147089 * sin(24 * t) + 1.76297 * sin(25 * t) +  0.81328 * sin(26 * t) - 1.03914 * sin(27 * t) - 0.848047 * sin(28 * t) -  0.202392 * sin(29 * t) + 0.998786 * sin(30 * t) + 0.909375 * sin(31 * t) -  0.097788 * sin(32 * t) + 0.223564 * sin(33 * t) + 0.0348564 * sin(34 * t) +  0.0887317 * sin(35 * t) + 0.428968 * sin(36 * t) + 0.490532 * sin(37 * t) +  1.017 * sin(38 * t) + 1.13451 * sin(39 * t) + 0.830158 * sin(40 * t) +  0.106305 * sin(41 * t) + 0.76665 * sin(42 * t) + 0.641496 * sin(43 * t) +  0.543672 * sin(44 * t) + 0.319862 * sin(45 * t) - 0.242548 * sin(46 * t) -  0.055042 * sin(47 * t) + 0.468334 * sin(48 * t) + 0.778998 * sin(49 * t) +  0.333997 * sin(50 * t) + 0.188959 * sin(51 * t) + 0.126642 * sin(52 * t) -  0.0348806 * sin(53 * t) - 0.174119 * sin(54 * t) + 0.262055 * sin(55 * t) +  0.0937339 * sin(56 * t) - 0.412463 * sin(57 * t) + 0.0324094 * sin(58 * t) +  0.155059 * sin(59 * t) - 0.0159176 * sin(60 * t) - 0.350021 * sin(61 * t) -  0.0861318 * sin(62 * t) - 0.125831 * sin(63 * t) - 0.355572 * sin(64 * t) +  0.448254 * sin(65 * t) + 0.298866 * sin(66 * t) - 0.363006 * sin(67 * t) -  0.035773 * sin(68 * t) + 0.646274 * sin(69 * t) + 0.345691 * sin(70 * t) -  0.17203 * sin(71 * t) - 0.0511773 * sin(72 * t) - 0.0573811 * sin(73 * t) -  0.0400944 * sin(74 * t) + 0.444262 * sin(75 * t) + 0.650192 * sin(76 * t) +  0.0898909 * sin(77 * t) + 0.0779399 * sin(78 * t) + 0.2626 * sin(79 * t) +  0.0113565 * sin(80 * t) - 0.191283 * sin(81 * t) - 0.0606482 * sin(82 * t) +  0.199625 * sin(83 * t) - 0.157 * sin(84 * t) - 0.361885 * sin(85 * t) -  0.104328 * sin(86 * t) + 0.0846031 * sin(87 * t) + 0.0010623 * sin(88 * t) +  0.200666 * sin(89 * t) - 0.0998171 * sin(90 * t) - 0.304964 * sin(91 * t) +  0.0119599 * sin(92 * t) - 0.013382 * sin(93 * t) + 0.178182 * sin(94 * t) +  0.151021 * sin(95 * t) - 0.244587 * sin(96 * t) - 0.193597 * sin(97 * t) -  0.0886071 * sin(98 * t) + 0.0169993 * sin(99 * t) - 0.0775795 * sin(100 * t) -  0.0636758 * sin(101 * t) + 0.0379605 * sin(102 * t) + 0.228198 * sin(103 * t) +  0.170766 * sin(104 * t) + 0.166234 * sin(105 * t) + 0.187862 * sin(106 * t) +  0.0728759 * sin(107 * t) + 0.141089 * sin(108 * t) - 0.0113814 * sin(109 * t) +  0.0157809 * sin(110 * t) - 0.0851709 * sin(111 * t) + 0.0864139 * sin(112 * t) +  0.040631 * sin(113 * t) - 0.0268375 * sin(114 * t) + 0.212332 * sin(115 * t) +  0.141805 * sin(116 * t) - 0.0232094 * sin(117 * t) + 0.0337744 * sin(118 * t) +  0.108849 * sin(119 * t) + 0.00168259 * sin(120 * t) +  0.00195791 * sin(121 * t) - 0.0183893 * sin(122 * t) -  0.0518631 * sin(123 * t) + 0.0449792 * sin(124 * t) + 0.0752107 * sin(125 * t) +  0.0675651 * sin(126 * t) - 0.103469 * sin(127 * t) + 0.12885 * sin(128 * t) +  0.236926 * sin(129 * t) + 0.0157162 * sin(130 * t) + 0.0103088 * sin(131 * t) +  0.0420982 * sin(132 * t) + 0.149305 * sin(133 * t) + 0.06462 * sin(134 * t) -  0.0936947 * sin(135 * t) - 0.156041 * sin(136 * t) - 0.199 * sin(137 * t) +  0.0368431 * sin(138 * t) + 0.206616 * sin(139 * t) - 0.129343 * sin(140 * t) -  0.177102 * sin(141 * t) + 0.178597 * sin(142 * t) + 0.0981779 * sin(143 * t) -  0.0539459 * sin(144 * t) + 0.0238829 * sin(145 * t) + 0.0365794 * sin(146 * t) -  0.042257 * sin(147 * t) - 0.0565534 * sin(148 * t) - 0.0761758 * sin(149 * t) +  0.0142745 * sin(150 * t) + 0.0434558 * sin(151 * t) + 0.0189254 * sin(152 * t) +  0.0242713 * sin(153 * t) - 0.0828469 * sin(154 * t) -  0.000848184 * sin(155 * t) + 0.129772 * sin(156 * t) +  0.0538947 * sin(157 * t) - 0.0308909 * sin(158 * t) - 0.0520041 * sin(159 * t) +  0.0896448 * sin(160 * t) - 0.00856814 * sin(161 * t) -  0.0755131 * sin(162 * t) - 0.0377812 * sin(163 * t) + 0.0563349 * sin(164 * t) +  0.0052598 * sin(165 * t) - 0.160387 * sin(166 * t) + 0.0354661 * sin(167 * t) +  0.101172 * sin(168 * t) + 0.0244088 * sin(169 * t) - 0.0944563 * sin(170 * t) +  0.0399332 * sin(171 * t) - 0.112773 * sin(172 * t) - 0.0213108 * sin(173 * t) +  0.0127796 * sin(174 * t) - 0.0371616 * sin(175 * t) - 0.067587 * sin(176 * t) +  0.0137979 * sin(177 * t) + 0.0900208 * sin(178 * t) - 0.0624982 * sin(179 * t) -  0.0448312 * sin(180 * t) + 0.0229777 * sin(181 * t) + 0.0473048 * sin(182 * t) +  0.0854295 * sin(183 * t) - 0.0334805 * sin(184 * t) + 0.0612631 * sin(185 * t) +  0.0159905 * sin(186 * t) - 0.0278003 * sin(187 * t) +  0.00422452 * sin(188 * t) + 0.000398646 * sin(189 * t) +  0.0143628 * sin(190 * t) - 0.054272 * sin(191 * t) + 0.00950656 * sin(192 * t) +  0.0155709 * sin(193 * t) + 0.0151788 * sin(194 * t) - 0.0132154 * sin(195 * t) +  0.0460365 * sin(196 * t) - 0.0468429 * sin(197 * t) +  0.00719954 * sin(198 * t) + 0.01143 * sin(199 * t) -  0.0196154 * sin(200 * t);
}
double Hormone_y(double t){
    return -908.526 + 4.96413 * cos(t) - 7.12843 * cos(2 * t) +  24.3249 * cos(3 * t) + 27.0653 * cos(4 * t) + 22.8052 * cos(5 * t) -  20.1898 * cos(6 * t) + 2.80809 * cos(7 * t) - 3.42058 * cos(8 * t) -  15.6018 * cos(9 * t) + 8.33031 * cos(10 * t) + 0.352671 * cos(11 * t) -  10.588 * cos(12 * t) - 3.4126 * cos(13 * t) + 0.311009 * cos(14 * t) +  0.0777095 * cos(15 * t) + 0.000613995 * cos(16 * t) - 6.96994 * cos(17 * t) +  0.360734 * cos(18 * t) - 4.49185 * cos(19 * t) + 1.05564 * cos(20 * t) -  3.25236 * cos(21 * t) + 5.81107 * cos(22 * t) + 3.24009 * cos(23 * t) -  0.279073 * cos(24 * t) + 0.731516 * cos(25 * t) + 0.14612 * cos(26 * t) +  0.817709 * cos(27 * t) + 0.719577 * cos(28 * t) + 1.22346 * cos(29 * t) +  1.25384 * cos(30 * t) + 0.422486 * cos(31 * t) - 1.67922 * cos(32 * t) -  2.11485 * cos(33 * t) - 0.799883 * cos(34 * t) - 1.06668 * cos(35 * t) +  0.82622 * cos(36 * t) + 0.255436 * cos(37 * t) - 1.54228 * cos(38 * t) +  0.170929 * cos(39 * t) - 0.483891 * cos(40 * t) + 0.242499 * cos(41 * t) -  2.71852 * cos(42 * t) + 0.183239 * cos(43 * t) - 0.85111 * cos(44 * t) -  0.813031 * cos(45 * t) - 0.745125 * cos(46 * t) - 1.11463 * cos(47 * t) -  0.12672 * cos(48 * t) - 0.587641 * cos(49 * t) + 0.530134 * cos(50 * t) +  0.405711 * cos(51 * t) - 0.0381114 * cos(52 * t) - 0.988118 * cos(53 * t) +  1.86496 * cos(54 * t) + 0.605136 * cos(55 * t) - 0.555295 * cos(56 * t) +  0.0175794 * cos(57 * t) + 0.213519 * cos(58 * t) + 0.0874758 * cos(59 * t) -  0.601494 * cos(60 * t) - 0.328801 * cos(61 * t) + 0.315584 * cos(62 * t) +  0.145495 * cos(63 * t) + 0.549401 * cos(64 * t) - 0.481159 * cos(65 * t) +  0.886576 * cos(66 * t) + 0.172404 * cos(67 * t) - 0.342494 * cos(68 * t) +  0.442328 * cos(69 * t) - 0.27238 * cos(70 * t) + 0.00638745 * cos(71 * t) +  0.0413336 * cos(72 * t) - 0.141641 * cos(73 * t) + 0.838735 * cos(74 * t) -  0.203884 * cos(75 * t) - 0.321171 * cos(76 * t) + 0.263952 * cos(77 * t) -  0.0331506 * cos(78 * t) + 0.115488 * cos(79 * t) - 0.0248849 * cos(80 * t) +  0.256326 * cos(81 * t) + 0.458719 * cos(82 * t) - 0.188536 * cos(83 * t) +  0.321918 * cos(84 * t) - 0.135501 * cos(85 * t) - 0.191731 * cos(86 * t) +  0.0905073 * cos(87 * t) - 0.241477 * cos(88 * t) + 0.119543 * cos(89 * t) +  0.233338 * cos(90 * t) - 0.247546 * cos(91 * t) + 0.211377 * cos(92 * t) -  0.318475 * cos(93 * t) + 0.419773 * cos(94 * t) - 0.155755 * cos(95 * t) +  0.0138513 * cos(96 * t) - 0.254795 * cos(97 * t) + 0.0364522 * cos(98 * t) +  0.312951 * cos(99 * t) - 0.25406 * cos(100 * t) - 0.208846 * cos(101 * t) +  0.230579 * cos(102 * t) - 0.0620541 * cos(103 * t) + 0.347332 * cos(104 * t) -  0.598914 * cos(105 * t) + 0.264941 * cos(106 * t) + 0.111833 * cos(107 * t) +  0.0347479 * cos(108 * t) + 0.0409059 * cos(109 * t) - 0.3475 * cos(110 * t) +  0.303 * cos(111 * t) + 0.0331475 * cos(112 * t) + 0.0157926 * cos(113 * t) -  0.251621 * cos(114 * t) - 0.0243364 * cos(115 * t) + 0.296462 * cos(116 * t) -  0.0716497 * cos(117 * t) - 0.310449 * cos(118 * t) + 0.101857 * cos(119 * t) +  0.160395 * cos(120 * t) - 0.0865879 * cos(121 * t) - 0.0896514 * cos(122 * t) -  0.151041 * cos(123 * t) + 0.232261 * cos(124 * t) - 0.0510498 * cos(125 * t) -  0.138953 * cos(126 * t) + 0.0107136 * cos(127 * t) - 0.00629564 * cos(128 * t) +  0.00977524 * cos(129 * t) - 0.0807058 * cos(130 * t) -  0.0496338 * cos(131 * t) + 0.0532211 * cos(132 * t) - 0.081166 * cos(133 * t) -  0.0732679 * cos(134 * t) - 0.0896191 * cos(135 * t) + 0.158857 * cos(136 * t) -  0.152534 * cos(137 * t) - 0.0622862 * cos(138 * t) - 0.0140894 * cos(139 * t) -  0.0308146 * cos(140 * t) - 0.00442232 * cos(141 * t) - 0.126639 * cos(142 * t) +  0.0352122 * cos(143 * t) - 0.0724047 * cos(144 * t) + 0.0555754 * cos(145 * t) -  0.0498536 * cos(146 * t) - 0.0422297 * cos(147 * t) - 0.0343324 * cos(148 * t) -  0.0781092 * cos(149 * t) + 0.0000580797 * cos(150 * t) +  0.0520484 * cos(151 * t) - 0.00141447 * cos(152 * t) +  0.0413804 * cos(153 * t) - 0.0124942 * cos(154 * t) - 0.0336826 * cos(155 * t) -  0.0352548 * cos(156 * t) + 0.058067 * cos(157 * t) - 0.0866817 * cos(158 * t) -  0.0138077 * cos(159 * t) - 0.0934877 * cos(160 * t) + 0.0256362 * cos(161 * t) -  0.0170001 * cos(162 * t) - 0.0885301 * cos(163 * t) - 0.0496595 * cos(164 * t) -  0.0177625 * cos(165 * t) - 0.0455378 * cos(166 * t) + 0.0112253 * cos(167 * t) -  0.140349 * cos(168 * t) - 0.0155119 * cos(169 * t) - 0.0883507 * cos(170 * t) -  0.0173856 * cos(171 * t) + 0.0865494 * cos(172 * t) - 0.0213909 * cos(173 * t) +  0.0131857 * cos(174 * t) - 0.0264783 * cos(175 * t) - 0.0745413 * cos(176 * t) +  0.0721725 * cos(177 * t) - 0.0826927 * cos(178 * t) + 0.0677586 * cos(179 * t) +  0.0052403 * cos(180 * t) + 0.0582199 * cos(181 * t) - 0.0604585 * cos(182 * t) +  0.0543904 * cos(183 * t) - 0.0797022 * cos(184 * t) + 0.0632423 * cos(185 * t) -  0.0870545 * cos(186 * t) - 0.0925282 * cos(187 * t) -  0.00961419 * cos(188 * t) + 0.0885661 * cos(189 * t) +  0.0689529 * cos(190 * t) + 0.0663542 * cos(191 * t) - 0.0614093 * cos(192 * t) +  0.0212316 * cos(193 * t) + 0.0293304 * cos(194 * t) - 0.0113134 * cos(195 * t) +  0.0252035 * cos(196 * t) - 0.0741016 * cos(197 * t) - 0.0508072 * cos(198 * t) +  0.00439637 * cos(199 * t) + 0.00788175 * cos(200 * t) - 0.0131683 * sin(t) -  0.159496 * sin(2 * t) + 0.91187 * sin(3 * t) + 1.86863 * sin(4 * t) +  1.01487 * sin(5 * t) - 0.740014 * sin(6 * t) - 0.408259 * sin(7 * t) -  0.723465 * sin(8 * t) - 0.871814 * sin(9 * t) + 0.335432 * sin(10 * t) -  0.15337 * sin(11 * t) - 1.41346 * sin(12 * t) - 0.880146 * sin(13 * t) -  0.0789172 * sin(14 * t) - 0.054444 * sin(15 * t) - 0.281711 * sin(16 * t) -  0.92507 * sin(17 * t) - 0.801646 * sin(18 * t) - 0.748063 * sin(19 * t) -  0.244875 * sin(20 * t) + 0.0393872 * sin(21 * t) + 1.12047 * sin(22 * t) +  1.02481 * sin(23 * t) + 0.334974 * sin(24 * t) + 0.220657 * sin(25 * t) +  0.111193 * sin(26 * t) + 0.158544 * sin(27 * t) + 0.41812 * sin(28 * t) +  0.704985 * sin(29 * t) + 0.553566 * sin(30 * t) - 0.0141893 * sin(31 * t) -  0.772651 * sin(32 * t) - 0.959147 * sin(33 * t) - 0.602509 * sin(34 * t) -  0.327753 * sin(35 * t) + 0.0672767 * sin(36 * t) - 0.0286918 * sin(37 * t) -  0.564332 * sin(38 * t) - 0.313913 * sin(39 * t) - 0.178636 * sin(40 * t) -  0.482539 * sin(41 * t) - 1.07281 * sin(42 * t) - 0.528613 * sin(43 * t) -  0.491692 * sin(44 * t) - 0.614612 * sin(45 * t) - 0.753647 * sin(46 * t) -  0.703289 * sin(47 * t) - 0.396364 * sin(48 * t) - 0.158982 * sin(49 * t) +  0.202341 * sin(50 * t) + 0.191922 * sin(51 * t) - 0.187525 * sin(52 * t) -  0.16643 * sin(53 * t) + 0.835098 * sin(54 * t) + 0.642492 * sin(55 * t) -  0.112551 * sin(56 * t) + 0.0157368 * sin(57 * t) + 0.0775499 * sin(58 * t) -  0.0967877 * sin(59 * t) - 0.264232 * sin(60 * t) - 0.125854 * sin(61 * t) +  0.0372556 * sin(62 * t) + 0.401262 * sin(63 * t) + 0.409566 * sin(64 * t) +  0.184427 * sin(65 * t) + 0.465579 * sin(66 * t) + 0.346532 * sin(67 * t) +  0.0985739 * sin(68 * t) + 0.184184 * sin(69 * t) - 0.0305489 * sin(70 * t) -  0.084928 * sin(71 * t) + 0.136114 * sin(72 * t) + 0.44527 * sin(73 * t) +  0.661244 * sin(74 * t) + 0.193823 * sin(75 * t) - 0.16237 * sin(76 * t) +  0.133285 * sin(77 * t) + 0.217652 * sin(78 * t) + 0.18761 * sin(79 * t) +  0.251505 * sin(80 * t) + 0.538705 * sin(81 * t) + 0.508284 * sin(82 * t) +  0.367905 * sin(83 * t) + 0.392886 * sin(84 * t) - 0.0840544 * sin(85 * t) -  0.378691 * sin(86 * t) - 0.132271 * sin(87 * t) + 0.0240937 * sin(88 * t) +  0.300118 * sin(89 * t) + 0.20252 * sin(90 * t) - 0.146514 * sin(91 * t) -  0.105449 * sin(92 * t) - 0.000672638 * sin(93 * t) + 0.126242 * sin(94 * t) -  0.00779442 * sin(95 * t) - 0.232017 * sin(96 * t) - 0.363328 * sin(97 * t) -  0.0793145 * sin(98 * t) + 0.0937538 * sin(99 * t) - 0.296187 * sin(100 * t) -  0.3262 * sin(101 * t) + 0.0131435 * sin(102 * t) + 0.0503647 * sin(103 * t) +  0.00474714 * sin(104 * t) - 0.301505 * sin(105 * t) + 0.0221168 * sin(106 * t) +  0.192213 * sin(107 * t) + 0.133814 * sin(108 * t) + 0.144179 * sin(109 * t) +  0.0737409 * sin(110 * t) + 0.25849 * sin(111 * t) + 0.171907 * sin(112 * t) -  0.0230764 * sin(113 * t) - 0.397098 * sin(114 * t) - 0.129093 * sin(115 * t) +  0.310967 * sin(116 * t) + 0.0350189 * sin(117 * t) - 0.258358 * sin(118 * t) +  0.0683083 * sin(119 * t) + 0.199492 * sin(120 * t) + 0.0434004 * sin(121 * t) -  0.00879893 * sin(122 * t) - 0.00786964 * sin(123 * t) +  0.120589 * sin(124 * t) - 0.0119163 * sin(125 * t) - 0.0892629 * sin(126 * t) +  0.0419423 * sin(127 * t) + 0.0563183 * sin(128 * t) + 0.0338587 * sin(129 * t) -  0.016395 * sin(130 * t) - 0.0301357 * sin(131 * t) + 0.0695742 * sin(132 * t) +  0.127311 * sin(133 * t) + 0.0710388 * sin(134 * t) + 0.0575614 * sin(135 * t) +  0.147805 * sin(136 * t) - 0.0602787 * sin(137 * t) + 0.0591118 * sin(138 * t) +  0.230606 * sin(139 * t) + 0.0905638 * sin(140 * t) - 0.0793818 * sin(141 * t) +  0.00429144 * sin(142 * t) + 0.0923983 * sin(143 * t) +  0.00864282 * sin(144 * t) - 0.00463859 * sin(145 * t) -  0.114222 * sin(146 * t) + 0.00442811 * sin(147 * t) + 0.215765 * sin(148 * t) +  0.079192 * sin(149 * t) - 0.0395458 * sin(150 * t) - 0.0859319 * sin(151 * t) -  0.0971424 * sin(152 * t) + 0.0487943 * sin(153 * t) + 0.0960851 * sin(154 * t) -  0.107628 * sin(155 * t) - 0.0780149 * sin(156 * t) + 0.12669 * sin(157 * t) +  0.0963017 * sin(158 * t) + 0.0157538 * sin(159 * t) - 0.0521648 * sin(160 * t) +  0.0314773 * sin(161 * t) + 0.106015 * sin(162 * t) + 0.0369864 * sin(163 * t) -  0.0407615 * sin(164 * t) + 0.00906711 * sin(165 * t) + 0.023029 * sin(166 * t) +  0.013931 * sin(167 * t) + 0.0521748 * sin(168 * t) + 0.0810874 * sin(169 * t) -  0.0443107 * sin(170 * t) - 0.0104046 * sin(171 * t) + 0.0507598 * sin(172 * t) -  0.0980904 * sin(173 * t) - 0.00819233 * sin(174 * t) +  0.0205489 * sin(175 * t) + 0.0333624 * sin(176 * t) + 0.0769095 * sin(177 * t) -  0.0903626 * sin(178 * t) - 0.0333272 * sin(179 * t) + 0.0128832 * sin(180 * t) -  0.033388 * sin(181 * t) - 0.0567049 * sin(182 * t) + 0.047907 * sin(183 * t) -  0.0626754 * sin(184 * t) + 0.064621 * sin(185 * t) + 0.0662583 * sin(186 * t) -  0.036851 * sin(187 * t) + 0.00626254 * sin(188 * t) + 0.0446475 * sin(189 * t) -  0.0502315 * sin(190 * t) - 0.0655941 * sin(191 * t) - 0.0100453 * sin(192 * t) +  0.0628366 * sin(193 * t) + 0.0112586 * sin(194 * t) - 0.0489677 * sin(195 * t) -  0.0256902 * sin(196 * t) + 0.0592462 * sin(197 * t) + 0.0656395 * sin(198 * t) -  0.035109 * sin(199 * t) - 0.0409355 * sin(200 * t);
}
#endif