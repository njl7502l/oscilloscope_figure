#ifndef MockLogo_h
#define MockLogo_h
#include <Arduino.h>

double MockLogo_x(double t){
    return 1534.77 - 349.179 * cos(t) + 80.7046 * cos(2 * t) + 371.825 * cos(3 * t) -  51.4757 * cos(4 * t) + 9.26652 * cos(5 * t) + 7.71662 * cos(6 * t) -  13.1643 * cos(7 * t) - 41.5146 * cos(8 * t) + 22.8725 * cos(9 * t) -  38.5085 * cos(10 * t) + 68.8899 * cos(11 * t) - 1.57653 * cos(12 * t) +  18.4478 * cos(13 * t) + 7.10122 * cos(14 * t) - 15.3342 * cos(15 * t) -  4.44693 * cos(16 * t) + 7.52645 * cos(17 * t) - 6.8942 * cos(18 * t) +  5.29168 * cos(19 * t) + 5.83482 * cos(20 * t) - 1.21268 * cos(21 * t) +  5.33215 * cos(22 * t) + 20.2559 * cos(23 * t) + 7.14006 * cos(24 * t) +  11.4436 * cos(25 * t) + 12.7847 * cos(26 * t) + 16.098 * cos(27 * t) +  3.43908 * cos(28 * t) + 2.48511 * cos(29 * t) - 6.18656 * cos(30 * t) -  2.90606 * cos(31 * t) + 5.21877 * cos(32 * t) + 5.52327 * cos(33 * t) +  0.260413 * cos(34 * t) - 7.86566 * cos(35 * t) - 3.81345 * cos(36 * t) -  1.19429 * cos(37 * t) + 0.395169 * cos(38 * t) + 9.0855 * cos(39 * t) -  1.93063 * cos(40 * t) + 3.84815 * cos(41 * t) - 5.39882 * cos(42 * t) +  0.994384 * cos(43 * t) - 0.844672 * cos(44 * t) - 1.3175 * cos(45 * t) +  0.369318 * cos(46 * t) - 4.07775 * cos(47 * t) + 3.25255 * cos(48 * t) +  0.93375 * cos(49 * t) + 0.516823 * cos(50 * t) + 0.692689 * cos(51 * t) -  1.26788 * cos(52 * t) + 1.14635 * cos(53 * t) + 0.218362 * cos(54 * t) +  3.93641 * cos(55 * t) - 0.368658 * cos(56 * t) - 0.782753 * cos(57 * t) -  0.114145 * cos(58 * t) + 2.80471 * cos(59 * t) - 1.25659 * cos(60 * t) -  0.610545 * cos(61 * t) - 0.345266 * cos(62 * t) + 1.5214 * cos(63 * t) +  1.4912 * cos(64 * t) + 0.884036 * cos(65 * t) + 0.902651 * cos(66 * t) -  0.380885 * cos(67 * t) + 0.241314 * cos(68 * t) + 0.512321 * cos(69 * t) +  0.0711775 * cos(70 * t) + 0.34301 * cos(71 * t) + 0.0481225 * cos(72 * t) +  0.860388 * cos(73 * t) + 0.0882046 * cos(74 * t) - 0.180398 * cos(75 * t) -  0.628154 * cos(76 * t) + 0.677546 * cos(77 * t) + 0.649051 * cos(78 * t) +  0.563294 * cos(79 * t) - 0.958448 * cos(80 * t) + 0.670747 * cos(81 * t) +  0.0123624 * cos(82 * t) + 0.881939 * cos(83 * t) + 0.456661 * cos(84 * t) -  0.16897 * cos(85 * t) - 0.391389 * cos(86 * t) - 0.252189 * cos(87 * t) +  1.14403 * cos(88 * t) + 0.400554 * cos(89 * t) + 0.178746 * cos(90 * t) +  0.5248 * cos(91 * t) - 0.367229 * cos(92 * t) + 0.39248 * cos(93 * t) +  0.215681 * cos(94 * t) + 0.713189 * cos(95 * t) - 0.219625 * cos(96 * t) +  0.191082 * cos(97 * t) + 0.444159 * cos(98 * t) + 0.330213 * cos(99 * t) +  0.143708 * cos(100 * t) + 0.192621 * cos(101 * t) - 0.491396 * cos(102 * t) +  0.162762 * cos(103 * t) - 0.200713 * cos(104 * t) + 0.404243 * cos(105 * t) -  0.395799 * cos(106 * t) - 0.237465 * cos(107 * t) + 0.0869109 * cos(108 * t) +  0.0450427 * cos(109 * t) + 0.369211 * cos(110 * t) - 0.172921 * cos(111 * t) -  0.264041 * cos(112 * t) + 0.268604 * cos(113 * t) - 0.0294996 * cos(114 * t) +  0.180367 * cos(115 * t) + 0.158143 * cos(116 * t) + 0.383324 * cos(117 * t) -  0.268603 * cos(118 * t) - 0.286652 * cos(119 * t) - 0.0699619 * cos(120 * t) +  0.58261 * cos(121 * t) - 0.00347578 * cos(122 * t) + 0.564718 * cos(123 * t) +  0.0936103 * cos(124 * t) + 0.016963 * cos(125 * t) + 0.31649 * cos(126 * t) +  0.400706 * cos(127 * t) + 0.40616 * cos(128 * t) - 0.256129 * cos(129 * t) +  0.0450869 * cos(130 * t) + 0.310841 * cos(131 * t) + 0.158186 * cos(132 * t) +  0.387964 * cos(133 * t) - 0.249792 * cos(134 * t) + 0.168431 * cos(135 * t) +  0.18093 * cos(136 * t) + 0.307187 * cos(137 * t) + 0.144457 * cos(138 * t) -  0.00973803 * cos(139 * t) + 0.189859 * cos(140 * t) + 0.208144 * cos(141 * t) +  0.0703727 * cos(142 * t) + 0.108168 * cos(143 * t) - 0.434921 * cos(144 * t) +  0.182172 * cos(145 * t) - 0.123385 * cos(146 * t) + 0.0214877 * cos(147 * t) -  0.0408656 * cos(148 * t) + 0.106786 * cos(149 * t) + 0.206685 * cos(150 * t) -  0.148217 * cos(151 * t) - 0.0335026 * cos(152 * t) - 0.0536516 * cos(153 * t) +  0.00132554 * cos(154 * t) + 0.179596 * cos(155 * t) - 0.159427 * cos(156 * t) -  0.0620059 * cos(157 * t) - 0.282815 * cos(158 * t) + 0.164512 * cos(159 * t) +  0.0671744 * cos(160 * t) + 0.0268643 * cos(161 * t) - 0.116848 * cos(162 * t) +  0.146754 * cos(163 * t) + 0.107118 * cos(164 * t) + 0.281218 * cos(165 * t) +  0.147752 * cos(166 * t) + 0.104369 * cos(167 * t) - 0.00990285 * cos(168 * t) +  0.137106 * cos(169 * t) + 0.184465 * cos(170 * t) + 0.0104367 * cos(171 * t) -  0.040719 * cos(172 * t) + 0.147764 * cos(173 * t) + 0.115452 * cos(174 * t) +  0.181992 * cos(175 * t) + 0.0592477 * cos(176 * t) + 0.174569 * cos(177 * t) +  0.116959 * cos(178 * t) + 0.0870482 * cos(179 * t) + 0.0719501 * cos(180 * t) +  0.0405908 * cos(181 * t) + 0.127303 * cos(182 * t) + 0.0756312 * cos(183 * t) -  0.08289 * cos(184 * t) + 0.156744 * cos(185 * t) - 0.147668 * cos(186 * t) +  0.073764 * cos(187 * t) - 0.0190356 * cos(188 * t) + 0.0244974 * cos(189 * t) +  0.0658814 * cos(190 * t) - 0.105149 * cos(191 * t) + 0.173242 * cos(192 * t) -  0.0152529 * cos(193 * t) - 0.0449992 * cos(194 * t) + 0.0446845 * cos(195 * t) -  0.156463 * cos(196 * t) + 0.00767809 * cos(197 * t) - 0.0531578 * cos(198 * t) +  0.126524 * cos(199 * t) - 0.0461952 * cos(200 * t) - 2.03401 * sin(t) +  2.45573 * sin(2 * t) + 4.40457 * sin(3 * t) + 0.978321 * sin(4 * t) -  0.167576 * sin(5 * t) + 1.07814 * sin(6 * t) - 1.4726 * sin(7 * t) -  1.50778 * sin(8 * t) - 1.01538 * sin(9 * t) + 0.103577 * sin(10 * t) +  2.71013 * sin(11 * t) + 1.9258 * sin(12 * t) + 0.564283 * sin(13 * t) +  0.475448 * sin(14 * t) - 1.54215 * sin(15 * t) - 0.581631 * sin(16 * t) -  0.0340018 * sin(17 * t) - 0.253465 * sin(18 * t) + 0.432554 * sin(19 * t) +  0.888125 * sin(20 * t) - 0.779344 * sin(21 * t) + 0.163215 * sin(22 * t) +  1.87248 * sin(23 * t) + 1.28922 * sin(24 * t) + 2.02557 * sin(25 * t) +  2.76661 * sin(26 * t) + 1.80876 * sin(27 * t) + 0.486137 * sin(28 * t) -  0.712254 * sin(29 * t) - 0.962838 * sin(30 * t) - 0.517557 * sin(31 * t) +  1.05069 * sin(32 * t) + 1.39581 * sin(33 * t) - 0.0851958 * sin(34 * t) -  1.66066 * sin(35 * t) - 0.988698 * sin(36 * t) - 0.526717 * sin(37 * t) +  0.366179 * sin(38 * t) + 1.47131 * sin(39 * t) + 1.28532 * sin(40 * t) +  0.321922 * sin(41 * t) - 0.458199 * sin(42 * t) - 0.61348 * sin(43 * t) -  0.166291 * sin(44 * t) - 0.0758051 * sin(45 * t) - 0.0658437 * sin(46 * t) -  0.012071 * sin(47 * t) + 0.336097 * sin(48 * t) + 0.405967 * sin(49 * t) +  0.00778497 * sin(50 * t) - 0.130113 * sin(51 * t) + 0.236565 * sin(52 * t) -  0.119614 * sin(53 * t) + 0.381205 * sin(54 * t) + 0.648251 * sin(55 * t) -  0.0283296 * sin(56 * t) - 0.233901 * sin(57 * t) - 0.0294904 * sin(58 * t) +  0.411228 * sin(59 * t) - 0.31588 * sin(60 * t) - 0.533783 * sin(61 * t) +  0.215927 * sin(62 * t) + 0.292797 * sin(63 * t) + 0.509311 * sin(64 * t) +  0.209542 * sin(65 * t) + 0.244783 * sin(66 * t) - 0.217499 * sin(67 * t) -  0.0980931 * sin(68 * t) + 0.0989707 * sin(69 * t) + 0.214265 * sin(70 * t) +  0.34496 * sin(71 * t) - 0.180508 * sin(72 * t) + 0.246866 * sin(73 * t) +  0.211929 * sin(74 * t) - 0.0436681 * sin(75 * t) + 0.0696515 * sin(76 * t) +  0.185207 * sin(77 * t) + 0.450938 * sin(78 * t) + 0.0155294 * sin(79 * t) -  0.13708 * sin(80 * t) + 0.0244439 * sin(81 * t) + 0.273213 * sin(82 * t) +  0.181232 * sin(83 * t) + 0.270117 * sin(84 * t) + 0.0734237 * sin(85 * t) -  0.237089 * sin(86 * t) - 0.0464595 * sin(87 * t) + 0.133032 * sin(88 * t) +  0.365225 * sin(89 * t) + 0.361906 * sin(90 * t) + 0.245163 * sin(91 * t) +  0.107097 * sin(92 * t) - 0.369824 * sin(93 * t) + 0.0794399 * sin(94 * t) +  0.169023 * sin(95 * t) + 0.0720188 * sin(96 * t) + 0.263587 * sin(97 * t) +  0.233969 * sin(98 * t) + 0.153915 * sin(99 * t) + 0.066045 * sin(100 * t) +  0.0562657 * sin(101 * t) - 0.082782 * sin(102 * t) + 0.00991614 * sin(103 * t) +  0.0612764 * sin(104 * t) - 0.0192937 * sin(105 * t) - 0.115253 * sin(106 * t) -  0.191508 * sin(107 * t) + 0.0881888 * sin(108 * t) - 0.00953527 * sin(109 * t) +  0.139616 * sin(110 * t) - 0.0472387 * sin(111 * t) - 0.184367 * sin(112 * t) +  0.0507454 * sin(113 * t) + 0.175965 * sin(114 * t) + 0.19505 * sin(115 * t) +  0.294986 * sin(116 * t) + 0.177985 * sin(117 * t) - 0.235303 * sin(118 * t) -  0.250163 * sin(119 * t) - 0.0222052 * sin(120 * t) + 0.140688 * sin(121 * t) +  0.276059 * sin(122 * t) + 0.189644 * sin(123 * t) + 0.182029 * sin(124 * t) +  0.00653593 * sin(125 * t) + 0.0430908 * sin(126 * t) + 0.257301 * sin(127 * t) +  0.125188 * sin(128 * t) + 0.0407053 * sin(129 * t) + 0.0428239 * sin(130 * t) +  0.0424128 * sin(131 * t) + 0.184525 * sin(132 * t) + 0.0299144 * sin(133 * t) -  0.0392765 * sin(134 * t) + 0.0765891 * sin(135 * t) + 0.20624 * sin(136 * t) +  0.240324 * sin(137 * t) + 0.08055 * sin(138 * t) - 0.00872334 * sin(139 * t) +  0.215821 * sin(140 * t) + 0.221319 * sin(141 * t) + 0.195813 * sin(142 * t) +  0.00685377 * sin(143 * t) - 0.187979 * sin(144 * t) - 0.121736 * sin(145 * t) -  0.0291968 * sin(146 * t) - 0.0243128 * sin(147 * t) + 0.156201 * sin(148 * t) +  0.20877 * sin(149 * t) + 0.0673557 * sin(150 * t) + 0.00808344 * sin(151 * t) -  0.0339609 * sin(152 * t) + 0.0561166 * sin(153 * t) + 0.118157 * sin(154 * t) +  0.0519505 * sin(155 * t) + 0.0264554 * sin(156 * t) - 0.165339 * sin(157 * t) -  0.121854 * sin(158 * t) + 0.0249544 * sin(159 * t) + 0.0972678 * sin(160 * t) +  0.0073606 * sin(161 * t) + 0.00465615 * sin(162 * t) +  0.0436747 * sin(163 * t) + 0.103111 * sin(164 * t) + 0.191459 * sin(165 * t) +  0.231948 * sin(166 * t) + 0.161374 * sin(167 * t) + 0.0520322 * sin(168 * t) +  0.0245065 * sin(169 * t) + 0.0305314 * sin(170 * t) - 0.124013 * sin(171 * t) -  0.016843 * sin(172 * t) + 0.128003 * sin(173 * t) + 0.183422 * sin(174 * t) +  0.12536 * sin(175 * t) + 0.0453318 * sin(176 * t) + 0.140022 * sin(177 * t) +  0.0819161 * sin(178 * t) + 0.0988145 * sin(179 * t) + 0.103747 * sin(180 * t) +  0.0298013 * sin(181 * t) + 0.0986123 * sin(182 * t) -  0.00482234 * sin(183 * t) - 0.0247117 * sin(184 * t) +  0.00830351 * sin(185 * t) + 0.0540649 * sin(186 * t) +  0.000255364 * sin(187 * t) + 0.0250007 * sin(188 * t) +  0.0662824 * sin(189 * t) + 0.0702434 * sin(190 * t) + 0.128203 * sin(191 * t) +  0.154205 * sin(192 * t) + 0.154768 * sin(193 * t) + 0.00382206 * sin(194 * t) -  0.0154795 * sin(195 * t) - 0.0847035 * sin(196 * t) - 0.149822 * sin(197 * t) +  0.0772059 * sin(198 * t) + 0.155367 * sin(199 * t) +  0.107679 * sin(200 * t);
}
double MockLogo_y(double t){
    return  -903.83 - 116.29 * cos(t) - 264.869 * cos(2 * t) +  78.1344 * cos(3 * t) + 8.38763 * cos(4 * t) + 47.973 * cos(5 * t) +  29.1182 * cos(6 * t) - 57.8608 * cos(7 * t) + 22.1616 * cos(8 * t) +  34.9073 * cos(9 * t) + 28.0364 * cos(10 * t) + 20.1062 * cos(11 * t) +  56.5852 * cos(12 * t) - 5.31136 * cos(13 * t) - 32.375 * cos(14 * t) +  25.5888 * cos(15 * t) - 9.32551 * cos(16 * t) - 2.71618 * cos(17 * t) -  9.40112 * cos(18 * t) - 16.5183 * cos(19 * t) + 5.40755 * cos(20 * t) +  0.756617 * cos(21 * t) - 12.404 * cos(22 * t) - 10.2599 * cos(23 * t) -  2.85669 * cos(24 * t) + 3.95926 * cos(25 * t) + 6.66713 * cos(26 * t) -  4.78155 * cos(27 * t) + 6.61007 * cos(28 * t) + 3.24774 * cos(29 * t) +  4.89545 * cos(30 * t) - 6.1142 * cos(31 * t) - 9.08215 * cos(32 * t) +  0.0841474 * cos(33 * t) + 2.86885 * cos(34 * t) + 7.13693 * cos(35 * t) -  0.142681 * cos(36 * t) - 0.157393 * cos(37 * t) - 5.79308 * cos(38 * t) +  0.192684 * cos(39 * t) - 3.71947 * cos(40 * t) - 1.13166 * cos(41 * t) -  1.34866 * cos(42 * t) - 0.0318613 * cos(43 * t) + 4.45959 * cos(44 * t) -  2.11923 * cos(45 * t) - 0.374991 * cos(46 * t) - 4.39007 * cos(47 * t) +  3.11789 * cos(48 * t) + 2.06699 * cos(49 * t) + 0.0167722 * cos(50 * t) +  0.380329 * cos(51 * t) + 1.10555 * cos(52 * t) + 0.675421 * cos(53 * t) -  1.28835 * cos(54 * t) + 1.40384 * cos(55 * t) + 0.247032 * cos(56 * t) +  0.546507 * cos(57 * t) - 1.43655 * cos(58 * t) + 2.17449 * cos(59 * t) +  0.478812 * cos(60 * t) - 0.399378 * cos(61 * t) + 1.22409 * cos(62 * t) +  1.33349 * cos(63 * t) + 1.47253 * cos(64 * t) - 0.854378 * cos(65 * t) +  0.268001 * cos(66 * t) + 0.0461183 * cos(67 * t) - 1.84344 * cos(68 * t) -  0.323298 * cos(69 * t) + 1.16271 * cos(70 * t) + 0.0242545 * cos(71 * t) -  1.07069 * cos(72 * t) - 0.584363 * cos(73 * t) + 1.12556 * cos(74 * t) +  0.322115 * cos(75 * t) - 0.307812 * cos(76 * t) - 0.212806 * cos(77 * t) -  0.930976 * cos(78 * t) - 0.690146 * cos(79 * t) + 0.679338 * cos(80 * t) -  0.455155 * cos(81 * t) - 1.12362 * cos(82 * t) - 0.561784 * cos(83 * t) -  0.202693 * cos(84 * t) + 0.678827 * cos(85 * t) - 0.981454 * cos(86 * t) +  0.116406 * cos(87 * t) - 0.675206 * cos(88 * t) + 0.566277 * cos(89 * t) +  1.04258 * cos(90 * t) - 0.0836659 * cos(91 * t) - 0.116584 * cos(92 * t) -  0.387115 * cos(93 * t) + 0.218667 * cos(94 * t) - 0.181402 * cos(95 * t) +  0.0422974 * cos(96 * t) + 0.209369 * cos(97 * t) + 0.298425 * cos(98 * t) +  0.341367 * cos(99 * t) + 0.512388 * cos(100 * t) + 0.24866 * cos(101 * t) +  0.428828 * cos(102 * t) + 0.406964 * cos(103 * t) - 0.136109 * cos(104 * t) +  0.052997 * cos(105 * t) + 0.242213 * cos(106 * t) - 0.21115 * cos(107 * t) +  0.135905 * cos(108 * t) - 0.15021 * cos(109 * t) - 0.193448 * cos(110 * t) -  0.103046 * cos(111 * t) + 0.153533 * cos(112 * t) + 0.173745 * cos(113 * t) -  0.59669 * cos(114 * t) - 0.0553845 * cos(115 * t) + 0.223049 * cos(116 * t) +  0.100792 * cos(117 * t) + 0.164658 * cos(118 * t) - 0.451606 * cos(119 * t) -  0.0437568 * cos(120 * t) - 0.212496 * cos(121 * t) + 0.0778576 * cos(122 * t) -  0.50571 * cos(123 * t) + 0.143742 * cos(124 * t) - 0.180301 * cos(125 * t) +  0.209724 * cos(126 * t) + 0.0588708 * cos(127 * t) + 0.102895 * cos(128 * t) -  0.0133228 * cos(129 * t) - 0.382573 * cos(130 * t) + 0.519372 * cos(131 * t) -  0.196442 * cos(132 * t) - 0.225909 * cos(133 * t) + 0.26431 * cos(134 * t) +  0.123488 * cos(135 * t) + 0.0631877 * cos(136 * t) - 0.0259898 * cos(137 * t) +  0.15029 * cos(138 * t) + 0.0983063 * cos(139 * t) - 0.3363 * cos(140 * t) +  0.313452 * cos(141 * t) - 0.0216445 * cos(142 * t) + 0.0691883 * cos(143 * t) +  0.180636 * cos(144 * t) + 0.0727581 * cos(145 * t) - 0.124053 * cos(146 * t) -  0.00857325 * cos(147 * t) + 0.077185 * cos(148 * t) + 0.0043662 * cos(149 * t) -  0.172173 * cos(150 * t) + 0.00498026 * cos(151 * t) + 0.0446908 * cos(152 * t) +  0.0825421 * cos(153 * t) - 0.0338259 * cos(154 * t) + 0.0826435 * cos(155 * t) -  0.294862 * cos(156 * t) + 0.233841 * cos(157 * t) - 0.207606 * cos(158 * t) +  0.290256 * cos(159 * t) - 0.279233 * cos(160 * t) - 0.056628 * cos(161 * t) +  0.0843887 * cos(162 * t) + 0.120872 * cos(163 * t) + 0.129643 * cos(164 * t) -  0.251887 * cos(165 * t) + 0.0656599 * cos(166 * t) + 0.0132451 * cos(167 * t) -  0.0639202 * cos(168 * t) + 0.0287214 * cos(169 * t) + 0.155851 * cos(170 * t) -  0.0485971 * cos(171 * t) + 0.102618 * cos(172 * t) + 0.0082629 * cos(173 * t) +  0.187836 * cos(174 * t) - 0.0768193 * cos(175 * t) + 0.0440627 * cos(176 * t) -  0.115191 * cos(177 * t) - 0.0642226 * cos(178 * t) - 0.0118094 * cos(179 * t) +  0.141259 * cos(180 * t) - 0.0878443 * cos(181 * t) + 0.00597485 * cos(182 * t) -  0.11007 * cos(183 * t) - 0.0755613 * cos(184 * t) + 0.0571732 * cos(185 * t) +  0.044802 * cos(186 * t) - 0.117936 * cos(187 * t) + 0.0632327 * cos(188 * t) -  0.0832098 * cos(189 * t) + 0.187593 * cos(190 * t) - 0.172781 * cos(191 * t) +  0.0974354 * cos(192 * t) - 0.174651 * cos(193 * t) + 0.0187072 * cos(194 * t) +  0.0306428 * cos(195 * t) + 0.0611594 * cos(196 * t) - 0.130608 * cos(197 * t) +  0.0718856 * cos(198 * t) - 0.00641997 * cos(199 * t) + 0.119873 * cos(200 * t) -  1.74368 * sin(t) - 2.05702 * sin(2 * t) - 0.541357 * sin(3 * t) +  1.08341 * sin(4 * t) + 0.977602 * sin(5 * t) + 0.759711 * sin(6 * t) -  1.38144 * sin(7 * t) - 0.93232 * sin(8 * t) + 2.18944 * sin(9 * t) +  0.492959 * sin(10 * t) + 2.03553 * sin(11 * t) + 3.7415 * sin(12 * t) -  0.487357 * sin(13 * t) - 1.32388 * sin(14 * t) - 0.145194 * sin(15 * t) -  0.473871 * sin(16 * t) - 0.905875 * sin(17 * t) - 0.565428 * sin(18 * t) -  0.864861 * sin(19 * t) - 0.31226 * sin(20 * t) + 0.390001 * sin(21 * t) -  1.84657 * sin(22 * t) - 1.11043 * sin(23 * t) - 0.269095 * sin(24 * t) +  0.172404 * sin(25 * t) + 1.04556 * sin(26 * t) + 0.365592 * sin(27 * t) +  1.52396 * sin(28 * t) + 1.17487 * sin(29 * t) + 0.0379496 * sin(30 * t) -  0.959025 * sin(31 * t) - 1.42306 * sin(32 * t) + 0.097982 * sin(33 * t) +  0.800344 * sin(34 * t) + 1.34708 * sin(35 * t) + 0.814187 * sin(36 * t) -  0.423344 * sin(37 * t) - 0.976437 * sin(38 * t) - 1.26949 * sin(39 * t) -  0.645772 * sin(40 * t) - 0.359869 * sin(41 * t) + 0.0640868 * sin(42 * t) +  0.691854 * sin(43 * t) + 0.373914 * sin(44 * t) - 0.137254 * sin(45 * t) -  0.727833 * sin(46 * t) - 0.747703 * sin(47 * t) + 0.215684 * sin(48 * t) +  0.857233 * sin(49 * t) + 0.42473 * sin(50 * t) + 0.119759 * sin(51 * t) +  0.196562 * sin(52 * t) - 0.31926 * sin(53 * t) - 0.582479 * sin(54 * t) +  0.0818646 * sin(55 * t) + 0.508778 * sin(56 * t) + 0.214417 * sin(57 * t) -  0.0826126 * sin(58 * t) + 0.0722742 * sin(59 * t) - 0.00626235 * sin(60 * t) -  0.183345 * sin(61 * t) + 0.456416 * sin(62 * t) + 0.787221 * sin(63 * t) +  0.400111 * sin(64 * t) - 0.270897 * sin(65 * t) - 0.274369 * sin(66 * t) -  0.21419 * sin(67 * t) - 0.663924 * sin(68 * t) - 0.147267 * sin(69 * t) +  0.429447 * sin(70 * t) + 0.206463 * sin(71 * t) - 0.27012 * sin(72 * t) -  0.0970877 * sin(73 * t) + 0.327267 * sin(74 * t) + 0.184623 * sin(75 * t) +  0.179981 * sin(76 * t) + 0.139539 * sin(77 * t) - 0.19797 * sin(78 * t) -  0.217238 * sin(79 * t) + 0.0387602 * sin(80 * t) - 0.266023 * sin(81 * t) -  0.337499 * sin(82 * t) - 0.110494 * sin(83 * t) + 0.0796438 * sin(84 * t) +  0.0401907 * sin(85 * t) - 0.170879 * sin(86 * t) - 0.0849685 * sin(87 * t) -  0.254984 * sin(88 * t) + 0.229114 * sin(89 * t) + 0.546955 * sin(90 * t) +  0.00561422 * sin(91 * t) - 0.0950811 * sin(92 * t) - 0.229575 * sin(93 * t) -  0.170663 * sin(94 * t) - 0.17287 * sin(95 * t) - 0.0839227 * sin(96 * t) +  0.194438 * sin(97 * t) + 0.0870699 * sin(98 * t) + 0.0859256 * sin(99 * t) +  0.168873 * sin(100 * t) + 0.222387 * sin(101 * t) + 0.22508 * sin(102 * t) +  0.169634 * sin(103 * t) + 0.0562158 * sin(104 * t) - 0.0465389 * sin(105 * t) -  0.109045 * sin(106 * t) - 0.135001 * sin(107 * t) + 0.0128676 * sin(108 * t) +  0.0668672 * sin(109 * t) - 0.0965046 * sin(110 * t) + 0.0419898 * sin(111 * t) +  0.0754156 * sin(112 * t) - 0.0876743 * sin(113 * t) - 0.253649 * sin(114 * t) +  0.00330086 * sin(115 * t) + 0.233235 * sin(116 * t) + 0.137015 * sin(117 * t) +  0.0516485 * sin(118 * t) - 0.144376 * sin(119 * t) - 0.148364 * sin(120 * t) -  0.0357885 * sin(121 * t) - 0.123452 * sin(122 * t) - 0.132604 * sin(123 * t) +  0.0468396 * sin(124 * t) + 0.142901 * sin(125 * t) + 0.0596239 * sin(126 * t) +  0.16127 * sin(127 * t) + 0.0770539 * sin(128 * t) - 0.139588 * sin(129 * t) -  0.11827 * sin(130 * t) + 0.195218 * sin(131 * t) - 0.0636914 * sin(132 * t) -  0.270833 * sin(133 * t) + 0.0897627 * sin(134 * t) + 0.128965 * sin(135 * t) -  0.00152538 * sin(136 * t) + 0.0217743 * sin(137 * t) + 0.221433 * sin(138 * t) -  0.0811319 * sin(139 * t) - 0.236726 * sin(140 * t) + 0.0801981 * sin(141 * t) +  0.047058 * sin(142 * t) + 0.0463615 * sin(143 * t) + 0.207616 * sin(144 * t) +  0.0307145 * sin(145 * t) - 0.0942108 * sin(146 * t) - 0.0751778 * sin(147 * t) +  0.0243894 * sin(148 * t) - 0.0000223414 * sin(149 * t) +  0.00936398 * sin(150 * t) + 0.0186686 * sin(151 * t) +  0.0727166 * sin(152 * t) + 0.0421133 * sin(153 * t) + 0.103323 * sin(154 * t) +  0.0228765 * sin(155 * t) - 0.0698403 * sin(156 * t) - 0.0389765 * sin(157 * t) -  0.0083872 * sin(158 * t) + 0.0277213 * sin(159 * t) - 0.0933423 * sin(160 * t) -  0.136433 * sin(161 * t) + 0.109362 * sin(162 * t) + 0.186377 * sin(163 * t) +  0.0543404 * sin(164 * t) - 0.107315 * sin(165 * t) - 0.0458839 * sin(166 * t) -  0.141798 * sin(167 * t) - 0.198795 * sin(168 * t) + 0.00058681 * sin(169 * t) +  0.161718 * sin(170 * t) + 0.0727295 * sin(171 * t) + 0.0442024 * sin(172 * t) +  0.0800986 * sin(173 * t) - 0.0785399 * sin(174 * t) + 0.0274073 * sin(175 * t) +  0.00120498 * sin(176 * t) - 0.00647058 * sin(177 * t) -  0.0266699 * sin(178 * t) + 0.0920918 * sin(179 * t) + 0.0394356 * sin(180 * t) -  0.1033 * sin(181 * t) + 0.0191439 * sin(182 * t) - 0.0283194 * sin(183 * t) -  0.0832634 * sin(184 * t) + 0.114763 * sin(185 * t) + 0.0584284 * sin(186 * t) -  0.0404811 * sin(187 * t) - 0.0257589 * sin(188 * t) + 0.176657 * sin(189 * t) +  0.105835 * sin(190 * t) + 0.0123308 * sin(191 * t) - 0.00566169 * sin(192 * t) -  0.110352 * sin(193 * t) - 0.182751 * sin(194 * t) + 0.0121367 * sin(195 * t) +  0.0348229 * sin(196 * t) - 0.011057 * sin(197 * t) + 0.0503107 * sin(198 * t) +  0.0377989 * sin(199 * t) + 0.0564306 * sin(200 * t);
}
#endif