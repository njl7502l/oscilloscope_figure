#ifndef FusicLogo_h
#define FusicLogo_h
#include <Arduino.h>

float FusicLogo_x(float t){
    return 1567.83 - 24.9872 * cos(t) + 12.7123 * cos(2 * t) - 3.07668 * cos(3 * t) +  16.523 * cos(4 * t) - 18.1719 * cos(5 * t) + 3.24887 * cos(6 * t) +  35.2736 * cos(7 * t) + 0.63876 * cos(8 * t) + 10.5401 * cos(9 * t) +  21.9244 * cos(10 * t) + 14.5024 * cos(11 * t) - 12.9796 * cos(12 * t) -  3.88962 * cos(13 * t) - 2.82182 * cos(14 * t) + 1.36016 * cos(15 * t) +  7.061 * cos(16 * t) - 6.53312 * cos(17 * t) + 1.8137 * cos(18 * t) -  4.18198 * cos(19 * t) + 5.66005 * cos(20 * t) + 1.73682 * cos(21 * t) +  1.98399 * cos(22 * t) - 4.14964 * cos(23 * t) + 3.8224 * cos(24 * t) -  1.29152 * cos(25 * t) + 2.28878 * cos(26 * t) + 1.93986 * cos(27 * t) +  1.77157 * cos(28 * t) + 0.133854 * cos(29 * t) - 0.584948 * cos(30 * t) -  1.85643 * cos(31 * t) - 0.0745882 * cos(32 * t) - 1.61372 * cos(33 * t) +  1.41463 * cos(34 * t) + 0.0352135 * cos(35 * t) + 1.02417 * cos(36 * t) +  0.527298 * cos(37 * t) + 0.288929 * cos(38 * t) - 0.323343 * cos(39 * t) -  0.300803 * cos(40 * t) + 0.758354 * cos(41 * t) + 1.3877 * cos(42 * t) -  0.511101 * cos(43 * t) + 0.72283 * cos(44 * t) + 0.241505 * cos(45 * t) +  0.229274 * cos(46 * t) + 0.184365 * cos(47 * t) - 1.07661 * cos(48 * t) -  0.154843 * cos(49 * t) - 0.637719 * cos(50 * t) + 0.516193 * cos(51 * t) +  0.422542 * cos(52 * t) + 0.0841982 * cos(53 * t) - 0.0324793 * cos(54 * t) +  0.209251 * cos(55 * t) + 0.0547151 * cos(56 * t) + 0.216926 * cos(57 * t) +  0.106745 * cos(58 * t) + 0.0683537 * cos(59 * t) + 0.242625 * cos(60 * t) -  0.0995085 * cos(61 * t) + 0.50733 * cos(62 * t) - 0.115231 * cos(63 * t) +  0.0710516 * cos(64 * t) - 0.0627789 * cos(65 * t) - 0.244291 * cos(66 * t) -  0.123497 * cos(67 * t) + 0.0279714 * cos(68 * t) + 0.0794738 * cos(69 * t) +  0.22754 * cos(70 * t) + 0.106295 * cos(71 * t) + 0.372417 * cos(72 * t) +  0.0561391 * cos(73 * t) + 0.0249589 * cos(74 * t) - 0.220462 * cos(75 * t) +  0.256874 * cos(76 * t) - 0.124289 * cos(77 * t) + 0.295239 * cos(78 * t) -  0.189301 * cos(79 * t) + 0.236412 * cos(80 * t) - 0.324731 * cos(81 * t) +  0.352811 * cos(82 * t) - 0.231787 * cos(83 * t) + 0.187105 * cos(84 * t) -  0.202627 * cos(85 * t) + 0.174969 * cos(86 * t) + 0.0719421 * cos(87 * t) +  0.167265 * cos(88 * t) + 0.145538 * cos(89 * t) + 0.0530765 * cos(90 * t) +  0.130614 * cos(91 * t) - 0.0253508 * cos(92 * t) + 0.0804248 * cos(93 * t) -  0.0690971 * cos(94 * t) - 0.0619016 * cos(95 * t) - 0.0327191 * cos(96 * t) +  0.0338759 * cos(97 * t) - 0.115922 * cos(98 * t) + 0.0870766 * cos(99 * t) -  0.0762197 * cos(100 * t) - 0.046545 * cos(101 * t) + 0.0354399 * cos(102 * t) +  0.00181027 * cos(103 * t) + 0.0527903 * cos(104 * t) +  0.0674908 * cos(105 * t) + 0.0859335 * cos(106 * t) + 0.0037853 * cos(107 * t) +  0.120282 * cos(108 * t) - 0.0639875 * cos(109 * t) + 0.0822996 * cos(110 * t) -  0.0726191 * cos(111 * t) + 0.00791578 * cos(112 * t) +  0.0250538 * cos(113 * t) - 0.010199 * cos(114 * t) - 0.0598122 * cos(115 * t) +  0.116211 * cos(116 * t) - 0.120127 * cos(117 * t) + 0.0272341 * cos(118 * t) +  0.0268063 * cos(119 * t) + 0.0000651495 * cos(120 * t) +  0.0247151 * cos(121 * t) + 0.0626763 * cos(122 * t) + 0.0443518 * cos(123 * t) +  0.0448032 * cos(124 * t) - 0.000930694 * cos(125 * t) +  0.0727765 * cos(126 * t) - 0.0401242 * cos(127 * t) - 0.0142136 * cos(128 * t) +  0.0383494 * cos(129 * t) - 0.0230715 * cos(130 * t) + 0.0284413 * cos(131 * t) +  0.0261911 * cos(132 * t) + 0.104273 * cos(133 * t) +  0.000869819 * cos(134 * t) - 0.0410801 * cos(135 * t) +  0.103798 * cos(136 * t) + 0.0140938 * cos(137 * t) - 0.0278985 * cos(138 * t) +  0.0922322 * cos(139 * t) - 0.00867246 * cos(140 * t) -  0.00527162 * cos(141 * t) + 0.0773188 * cos(142 * t) -  0.0726014 * cos(143 * t) + 0.0226851 * cos(144 * t) - 0.0170398 * cos(145 * t) -  0.0417454 * cos(146 * t) + 0.0501488 * cos(147 * t) - 0.070656 * cos(148 * t) -  0.0370493 * cos(149 * t) + 0.0438388 * cos(150 * t) + 0.0119067 * cos(151 * t) +  0.042491 * cos(152 * t) + 0.0231876 * cos(153 * t) + 0.00507881 * cos(154 * t) -  0.00677159 * cos(155 * t) + 0.0331438 * cos(156 * t) +  0.0138396 * cos(157 * t) - 0.0325738 * cos(158 * t) + 0.0432633 * cos(159 * t) +  0.00638778 * cos(160 * t) - 0.109778 * cos(161 * t) + 0.0314891 * cos(162 * t) +  0.0347888 * cos(163 * t) - 0.00348674 * cos(164 * t) -  0.0304853 * cos(165 * t) - 0.0723668 * cos(166 * t) + 0.0690645 * cos(167 * t) -  0.00300883 * cos(168 * t) - 0.0128392 * cos(169 * t) -  0.0164553 * cos(170 * t) + 0.0495606 * cos(171 * t) + 0.012419 * cos(172 * t) +  0.0275273 * cos(173 * t) + 0.0432717 * cos(174 * t) - 0.0417192 * cos(175 * t) +  0.0156294 * cos(176 * t) + 0.0234503 * cos(177 * t) + 0.0277872 * cos(178 * t) -  0.0494791 * cos(179 * t) + 0.00696529 * cos(180 * t) +  0.0678739 * cos(181 * t) + 0.0418422 * cos(182 * t) - 0.0409785 * cos(183 * t) +  0.038192 * cos(184 * t) - 0.0557268 * cos(185 * t) + 0.0889084 * cos(186 * t) -  0.061771 * cos(187 * t) + 0.0815828 * cos(188 * t) - 0.00498218 * cos(189 * t) +  0.0385123 * cos(190 * t) - 0.0593104 * cos(191 * t) - 0.0399557 * cos(192 * t) -  0.00139902 * cos(193 * t) + 0.118662 * cos(194 * t) - 0.0102256 * cos(195 * t) -  0.0659155 * cos(196 * t) - 0.0132997 * cos(197 * t) + 0.022055 * cos(198 * t) +  0.0203553 * cos(199 * t) + 0.00949108 * cos(200 * t) - 0.273553  * sin(t) +  0.273883  * sin(2 * t) - 0.490512  * sin(3 * t) - 0.69555  * sin(4 * t) +  1.22002  * sin(5 * t) + 1.00484  * sin(6 * t) - 3.12632  * sin(7 * t) +  0.503887  * sin(8 * t) + 1.36499  * sin(9 * t) - 4.00595  * sin(10 * t) -  0.412664  * sin(11 * t) + 1.99564  * sin(12 * t) + 0.455645  * sin(13 * t) +  0.480621  * sin(14 * t) - 0.705754  * sin(15 * t) - 1.38346  * sin(16 * t) +  0.822792  * sin(17 * t) + 0.622273  * sin(18 * t) - 0.164886  * sin(19 * t) +  0.340545  * sin(20 * t) - 1.93027  * sin(21 * t) + 0.743117  * sin(22 * t) +  1.08992  * sin(23 * t) - 1.25637  * sin(24 * t) + 0.919038  * sin(25 * t) -  0.516902  * sin(26 * t) - 0.814927  * sin(27 * t) - 0.198614  * sin(28 * t) -  0.146914  * sin(29 * t) + 0.282724  * sin(30 * t) + 0.635024  * sin(31 * t) +  0.0912098  * sin(32 * t) + 0.345433  * sin(33 * t) - 0.390662  * sin(34 * t) -  0.346905  * sin(35 * t) - 0.165616  * sin(36 * t) - 0.30391  * sin(37 * t) +  0.135752  * sin(38 * t) + 0.0740002  * sin(39 * t) + 0.771307  * sin(40 * t) -  0.691441  * sin(41 * t) - 0.483003  * sin(42 * t) + 0.586143  * sin(43 * t) -  0.473124  * sin(44 * t) - 0.130252  * sin(45 * t) - 0.0214908  * sin(46 * t) -  0.469141  * sin(47 * t) + 0.847317  * sin(48 * t) + 0.146581  * sin(49 * t) -  0.0183102  * sin(50 * t) + 0.269331  * sin(51 * t) - 0.961421  * sin(52 * t) +  0.395454  * sin(53 * t) + 0.0725213  * sin(54 * t) - 0.276667  * sin(55 * t) +  0.16644  * sin(56 * t) - 0.108634  * sin(57 * t) - 0.0439269  * sin(58 * t) -  0.0282845  * sin(59 * t) + 0.18306  * sin(60 * t) - 0.175083  * sin(61 * t) -  0.155766  * sin(62 * t) - 0.0329316  * sin(63 * t) - 0.0304709  * sin(64 * t) -  0.0654582  * sin(65 * t) + 0.32291  * sin(66 * t) - 0.0412815  * sin(67 * t) +  0.0738294  * sin(68 * t) - 0.0632664  * sin(69 * t) - 0.217507  * sin(70 * t) +  0.227389  * sin(71 * t) - 0.54625  * sin(72 * t) + 0.0446828  * sin(73 * t) +  0.299016  * sin(74 * t) - 0.0462811  * sin(75 * t) + 0.0277954  * sin(76 * t) -  0.0974559  * sin(77 * t) - 0.19215  * sin(78 * t) + 0.0741075  * sin(79 * t) +  0.0601771  * sin(80 * t) + 0.0383017  * sin(81 * t) - 0.0507743  * sin(82 * t) -  0.141243  * sin(83 * t) + 0.0951615  * sin(84 * t) + 0.177165  * sin(85 * t) -  0.106733  * sin(86 * t) - 0.105013  * sin(87 * t) - 0.102055  * sin(88 * t) -  0.123123  * sin(89 * t) + 0.0209004  * sin(90 * t) + 0.0280829  * sin(91 * t) -  0.0161928  * sin(92 * t) - 0.0772643  * sin(93 * t) + 0.0673004  * sin(94 * t) +  0.0626746  * sin(95 * t) - 0.00899252  * sin(96 * t) - 0.0371408  * sin(97 * t) +  0.00957012  * sin(98 * t) - 0.0161494  * sin(99 * t) - 0.0231932  * sin(100 * t) +  0.0824799  * sin(101 * t) + 0.124772  * sin(102 * t) - 0.0592369  * sin(103 * t) -  0.154195  * sin(104 * t) + 0.048108  * sin(105 * t) + 0.00804207  * sin(106 * t) -  0.188929  * sin(107 * t) + 0.0111661  * sin(108 * t) + 0.0056029  * sin(109 * t) +  0.0190754  * sin(110 * t) + 0.10429  * sin(111 * t) - 0.00753047  * sin(112 * t) +  0.00986134  * sin(113 * t) - 0.189821  * sin(114 * t) + 0.0585183  * sin(115 * t) +  0.103359  * sin(116 * t) - 0.0680169  * sin(117 * t) - 0.0102293  * sin(118 * t) +  0.0140476  * sin(119 * t) + 0.0425117  * sin(120 * t) + 0.0383476  * sin(121 * t) -  0.0619074  * sin(122 * t) - 0.101112  * sin(123 * t) - 0.0718149  * sin(124 * t) -  0.0916331  * sin(125 * t) + 0.13252  * sin(126 * t) + 0.00849122  * sin(127 * t) -  0.0331117  * sin(128 * t) + 0.129797  * sin(129 * t) - 0.168026  * sin(130 * t) +  0.0223098  * sin(131 * t) - 0.0146658  * sin(132 * t) - 0.0310424  * sin(133 * t) -  0.0471144  * sin(134 * t) - 0.123768  * sin(135 * t) + 0.0794653  * sin(136 * t) +  0.052084  * sin(137 * t) - 0.0144273  * sin(138 * t) - 0.0521348  * sin(139 * t) -  0.0163362  * sin(140 * t) - 0.0409741  * sin(141 * t) - 0.0406074  * sin(142 * t) -  0.00369642  * sin(143 * t) - 0.0103236  * sin(144 * t) +  0.0114854  * sin(145 * t) + 0.124237  * sin(146 * t) + 0.048996  * sin(147 * t) -  0.0183153  * sin(148 * t) - 0.0424732  * sin(149 * t) - 0.06433  * sin(150 * t) +  0.0252588  * sin(151 * t) - 0.0209691  * sin(152 * t) - 0.0232953  * sin(153 * t) -  0.0234698  * sin(154 * t) + 0.00913164  * sin(155 * t) +  0.00417534  * sin(156 * t) + 0.0172156  * sin(157 * t) +  0.0154396  * sin(158 * t) - 0.0280234  * sin(159 * t) - 0.0256213  * sin(160 * t) -  0.0508553  * sin(161 * t) - 0.001511  * sin(162 * t) + 0.122942  * sin(163 * t) +  0.0495483  * sin(164 * t) - 0.0588292  * sin(165 * t) + 0.0287614  * sin(166 * t) -  0.0220269  * sin(167 * t) + 0.0460597  * sin(168 * t) - 0.0725895  * sin(169 * t) -  0.0240173  * sin(170 * t) + 0.00028708  * sin(171 * t) -  0.00272014  * sin(172 * t) + 0.0179722  * sin(173 * t) -  0.0277729  * sin(174 * t) - 0.027965  * sin(175 * t) - 0.0400083  * sin(176 * t) +  0.0254347  * sin(177 * t) - 0.0321516  * sin(178 * t) - 0.0218344  * sin(179 * t) +  0.0060768  * sin(180 * t) + 0.000608491  * sin(181 * t) +  0.0192702  * sin(182 * t) - 0.0345417  * sin(183 * t) - 0.0713349  * sin(184 * t) -  0.0114431  * sin(185 * t) - 0.0242222  * sin(186 * t) -  0.00168312  * sin(187 * t) + 0.0245299  * sin(188 * t) +  0.0246316  * sin(189 * t) - 0.00747087  * sin(190 * t) -  0.0464194  * sin(191 * t) - 0.0588542  * sin(192 * t) + 0.0378697  * sin(193 * t) +  0.0110969  * sin(194 * t) + 0.0181244  * sin(195 * t) -  0.000496489  * sin(196 * t) - 0.027987  * sin(197 * t) +  0.00970326  * sin(198 * t) + 0.000335275  * sin(199 * t) +  0.000887112  * sin(200 * t);

}

float FusicLogo_y(float t){
    return  -911.814 + 9.61232 * cos(t) -  18.1887 * cos(2 * t) - 36.0706 * cos(3 * t) + 4.65598 * cos(4 * t) -  12.8737 * cos(5 * t) - 31.126 * cos(6 * t) - 3.68428 * cos(7 * t) -  5.17198 * cos(8 * t) + 5.65017 * cos(9 * t) + 6.60252 * cos(10 * t) +  22.007 * cos(11 * t) + 12.0404 * cos(12 * t) - 19.4164 * cos(13 * t) +  3.87442 * cos(14 * t) + 0.940576 * cos(15 * t) + 5.3707 * cos(16 * t) +  5.2815 * cos(17 * t) - 2.5922 * cos(18 * t) + 2.18117 * cos(19 * t) +  5.06028 * cos(20 * t) + 1.84686 * cos(21 * t) - 1.33611 * cos(22 * t) +  4.91794 * cos(23 * t) + 0.299 * cos(24 * t) + 1.87415 * cos(25 * t) +  0.208563 * cos(26 * t) - 0.923484 * cos(27 * t) - 0.295326 * cos(28 * t) -  0.373185 * cos(29 * t) + 2.3925 * cos(30 * t) + 1.02435 * cos(31 * t) +  1.62893 * cos(32 * t) - 0.309875 * cos(33 * t) - 0.498211 * cos(34 * t) -  1.04308 * cos(35 * t) + 0.0612886 * cos(36 * t) - 0.913724 * cos(37 * t) +  0.900071 * cos(38 * t) - 0.283599 * cos(39 * t) - 0.278707 * cos(40 * t) -  0.173172 * cos(41 * t) + 0.601684 * cos(42 * t) + 0.328812 * cos(43 * t) -  0.922487 * cos(44 * t) - 0.460917 * cos(45 * t) + 0.103778 * cos(46 * t) +  0.081691 * cos(47 * t) - 0.34802 * cos(48 * t) - 0.0200902 * cos(49 * t) -  0.17585 * cos(50 * t) + 0.923799 * cos(51 * t) + 0.183331 * cos(52 * t) +  0.146099 * cos(53 * t) + 0.00244157 * cos(54 * t) + 0.0451391 * cos(55 * t) +  0.0849035 * cos(56 * t) + 0.347321 * cos(57 * t) + 0.206859 * cos(58 * t) +  0.239347 * cos(59 * t) + 0.115963 * cos(60 * t) + 0.344393 * cos(61 * t) +  0.0823411 * cos(62 * t) + 0.319983 * cos(63 * t) + 0.168827 * cos(64 * t) +  0.316726 * cos(65 * t) - 0.113431 * cos(66 * t) + 0.338604 * cos(67 * t) -  0.423572 * cos(68 * t) + 0.362992 * cos(69 * t) - 0.360888 * cos(70 * t) +  0.267253 * cos(71 * t) - 0.0849966 * cos(72 * t) + 0.400269 * cos(73 * t) -  0.00359163 * cos(74 * t) - 0.0548768 * cos(75 * t) - 0.138847 * cos(76 * t) -  0.197157 * cos(77 * t) + 0.225201 * cos(78 * t) - 0.262865 * cos(79 * t) +  0.145847 * cos(80 * t) - 0.25977 * cos(81 * t) + 0.350195 * cos(82 * t) -  0.137317 * cos(83 * t) + 0.279797 * cos(84 * t) - 0.186743 * cos(85 * t) +  0.151565 * cos(86 * t) - 0.144446 * cos(87 * t) + 0.0425639 * cos(88 * t) -  0.17074 * cos(89 * t) + 0.158103 * cos(90 * t) - 0.088687 * cos(91 * t) +  0.169289 * cos(92 * t) + 0.0782265 * cos(93 * t) + 0.0847521 * cos(94 * t) -  0.00933735 * cos(95 * t) + 0.0228072 * cos(96 * t) + 0.0196909 * cos(97 * t) -  0.089145 * cos(98 * t) + 0.113676 * cos(99 * t) - 0.0120782 * cos(100 * t) +  0.0323823 * cos(101 * t) + 0.136939 * cos(102 * t) - 0.00732867 * cos(103 * t) +  0.174615 * cos(104 * t) - 0.0117348 * cos(105 * t) + 0.152206 * cos(106 * t) -  0.131529 * cos(107 * t) + 0.165937 * cos(108 * t) - 0.158609 * cos(109 * t) +  0.208418 * cos(110 * t) - 0.148989 * cos(111 * t) + 0.17776 * cos(112 * t) -  0.0265333 * cos(113 * t) + 0.0413209 * cos(114 * t) + 0.0734707 * cos(115 * t) -  0.0382187 * cos(116 * t) - 0.0363583 * cos(117 * t) + 0.0113429 * cos(118 * t) -  0.0336696 * cos(119 * t) - 0.104494 * cos(120 * t) + 0.0869943 * cos(121 * t) -  0.106647 * cos(122 * t) + 0.0887483 * cos(123 * t) - 0.0481336 * cos(124 * t) +  0.0769807 * cos(125 * t) - 0.0684152 * cos(126 * t) + 0.0875735 * cos(127 * t) -  0.111367 * cos(128 * t) + 0.0468568 * cos(129 * t) - 0.00710504 * cos(130 * t) -  0.00745036 * cos(131 * t) + 0.0235451 * cos(132 * t) +  0.0872369 * cos(133 * t) + 0.0311883 * cos(134 * t) + 0.0136083 * cos(135 * t) +  0.0832897 * cos(136 * t) - 0.0594386 * cos(137 * t) + 0.140353 * cos(138 * t) -  0.0584486 * cos(139 * t) - 0.0280144 * cos(140 * t) + 0.0644959 * cos(141 * t) -  0.0209763 * cos(142 * t) + 0.0570151 * cos(143 * t) + 0.041316 * cos(144 * t) -  0.0249517 * cos(145 * t) + 0.0119282 * cos(146 * t) + 0.0549614 * cos(147 * t) -  0.117313 * cos(148 * t) + 0.106624 * cos(149 * t) - 0.0439512 * cos(150 * t) -  0.0548762 * cos(151 * t) + 0.0361664 * cos(152 * t) +  0.00447096 * cos(153 * t) - 0.0149468 * cos(154 * t) +  0.0232479 * cos(155 * t) + 0.0239797 * cos(156 * t) + 0.021027 * cos(157 * t) -  0.0120482 * cos(158 * t) - 0.00727959 * cos(159 * t) +  0.00240865 * cos(160 * t) - 0.0131022 * cos(161 * t) +  0.0377677 * cos(162 * t) - 0.0321893 * cos(163 * t) + 0.0145097 * cos(164 * t) +  0.140978 * cos(165 * t) - 0.121809 * cos(166 * t) + 0.01695 * cos(167 * t) +  0.0264847 * cos(168 * t) + 0.0343752 * cos(169 * t) - 0.0245195 * cos(170 * t) +  0.00184184 * cos(171 * t) - 0.0499989 * cos(172 * t) +  0.0810855 * cos(173 * t) - 0.0585348 * cos(174 * t) + 0.0607899 * cos(175 * t) -  0.00384141 * cos(176 * t) - 0.0272633 * cos(177 * t) + 0.049542 * cos(178 * t) -  0.0195723 * cos(179 * t) + 0.0570635 * cos(180 * t) - 0.0515978 * cos(181 * t) -  0.000752782 * cos(182 * t) + 0.0112166 * cos(183 * t) +  0.0718587 * cos(184 * t) - 0.0752256 * cos(185 * t) + 0.10246 * cos(186 * t) -  0.0601806 * cos(187 * t) + 0.06157 * cos(188 * t) - 0.0550413 * cos(189 * t) +  0.0219642 * cos(190 * t) + 0.0202419 * cos(191 * t) + 0.0219403 * cos(192 * t) -  0.0289679 * cos(193 * t) - 0.0396722 * cos(194 * t) + 0.0110872 * cos(195 * t) +  0.0368203 * cos(196 * t) - 0.0184225 * cos(197 * t) - 0.0646868 * cos(198 * t) +  0.0976514 * cos(199 * t) - 0.0361341 * cos(200 * t) - 0.695224  * sin(t) +  0.368757  * sin(2 * t) + 0.982841  * sin(3 * t) - 1.50773  * sin(4 * t) +  0.648908  * sin(5 * t) + 1.54019  * sin(6 * t) + 0.608547  * sin(7 * t) -  0.0770471  * sin(8 * t) + 0.0491737  * sin(9 * t) + 0.104426  * sin(10 * t) -  3.3719  * sin(11 * t) - 1.11421  * sin(12 * t) + 3.7022  * sin(13 * t) -  0.290742  * sin(14 * t) - 1.0559  * sin(15 * t) + 0.593194  * sin(16 * t) -  2.44635  * sin(17 * t) + 1.54122  * sin(18 * t) + 0.53896  * sin(19 * t) -  2.39276  * sin(20 * t) + 1.27921  * sin(21 * t) + 0.0670365  * sin(22 * t) -  0.943163  * sin(23 * t) - 0.15208  * sin(24 * t) - 0.090267  * sin(25 * t) -  0.280726  * sin(26 * t) + 0.417152  * sin(27 * t) + 0.390146  * sin(28 * t) -  0.0517306  * sin(29 * t) - 0.436576  * sin(30 * t) - 0.612544  * sin(31 * t) -  0.0869818  * sin(32 * t) - 0.14306  * sin(33 * t) + 0.585883  * sin(34 * t) +  0.0974828  * sin(35 * t) + 0.0631526  * sin(36 * t) + 0.133731  * sin(37 * t) -  0.408512  * sin(38 * t) + 0.0192394  * sin(39 * t) + 0.183153  * sin(40 * t) +  0.207098  * sin(41 * t) - 0.291062  * sin(42 * t) - 0.451109  * sin(43 * t) +  0.751995  * sin(44 * t) + 0.27321  * sin(45 * t) - 0.646548  * sin(46 * t) +  0.428215  * sin(47 * t) - 0.24523  * sin(48 * t) + 0.19803  * sin(49 * t) +  0.372301  * sin(50 * t) - 0.832635  * sin(51 * t) - 0.0537524  * sin(52 * t) +  0.395839  * sin(53 * t) - 0.33343  * sin(54 * t) + 0.237504  * sin(55 * t) +  0.169159  * sin(56 * t) - 0.531778  * sin(57 * t) + 0.0610331  * sin(58 * t) -  0.0707453  * sin(59 * t) - 0.084078  * sin(60 * t) - 0.107031  * sin(61 * t) +  0.176495  * sin(62 * t) - 0.225645  * sin(63 * t) - 0.0178551  * sin(64 * t) -  0.0506471  * sin(65 * t) - 0.166037  * sin(66 * t) + 0.0429749  * sin(67 * t) +  0.00466734  * sin(68 * t) + 0.0312731  * sin(69 * t) + 0.00174759  * sin(70 * t) +  0.155911  * sin(71 * t) - 0.15592  * sin(72 * t) - 0.140774  * sin(73 * t) -  0.246032  * sin(74 * t) + 0.302658  * sin(75 * t) + 0.227341  * sin(76 * t) -  0.173637  * sin(77 * t) + 0.0286901  * sin(78 * t) - 0.178193  * sin(79 * t) +  0.145416  * sin(80 * t) + 0.242097  * sin(81 * t) - 0.230722  * sin(82 * t) -  0.18204  * sin(83 * t) + 0.24245  * sin(84 * t) - 0.137407  * sin(85 * t) -  0.109721  * sin(86 * t) + 0.204302  * sin(87 * t) - 0.039398  * sin(88 * t) +  0.0346433  * sin(89 * t) - 0.00133225  * sin(90 * t) - 0.0417933  * sin(91 * t) -  0.0150694  * sin(92 * t) - 0.161766  * sin(93 * t) - 0.0099386  * sin(94 * t) +  0.0842363  * sin(95 * t) + 0.0000619415  * sin(96 * t) + 0.0605506  * sin(97 * t) -  0.167921  * sin(98 * t) + 0.149422  * sin(99 * t) - 0.15765  * sin(100 * t) -  0.105281  * sin(101 * t) + 0.186427  * sin(102 * t) - 0.0141105  * sin(103 * t) -  0.211113  * sin(104 * t) - 0.0813876  * sin(105 * t) + 0.0569536  * sin(106 * t) +  0.0625393  * sin(107 * t) + 0.0424878  * sin(108 * t) - 0.238895  * sin(109 * t) +  0.101072  * sin(110 * t) - 0.00590017  * sin(111 * t) + 0.0122064  * sin(112 * t) -  0.0565482  * sin(113 * t) - 0.104033  * sin(114 * t) + 0.119622  * sin(115 * t) -  0.104345  * sin(116 * t) + 0.0621788  * sin(117 * t) + 0.0601874  * sin(118 * t) -  0.0366199  * sin(119 * t) - 0.0268248  * sin(120 * t) + 0.0581008  * sin(121 * t) +  0.0242062  * sin(122 * t) + 0.0248232  * sin(123 * t) - 0.0651667  * sin(124 * t) +  0.0342584  * sin(125 * t) - 0.0245645  * sin(126 * t) - 0.0499136  * sin(127 * t) +  0.0352394  * sin(128 * t) + 0.0169719  * sin(129 * t) + 0.0364411  * sin(130 * t) -  0.00531598  * sin(131 * t) - 0.0579706  * sin(132 * t) -  0.0109788  * sin(133 * t) + 0.0328789  * sin(134 * t) - 0.213311  * sin(135 * t) +  0.0313677  * sin(136 * t) - 0.0377853  * sin(137 * t) + 0.130454  * sin(138 * t) -  0.0398225  * sin(139 * t) - 0.0724079  * sin(140 * t) - 0.0233212  * sin(141 * t) +  0.00347754  * sin(142 * t) + 0.0435901  * sin(143 * t) - 0.101164  * sin(144 * t) +  0.049177  * sin(145 * t) - 0.127478  * sin(146 * t) + 0.0877421  * sin(147 * t) -  0.0333864  * sin(148 * t) + 0.0961264  * sin(149 * t) - 0.0131155  * sin(150 * t) +  0.00312968  * sin(151 * t) - 0.000659568  * sin(152 * t) -  0.0611041  * sin(153 * t) + 0.0228074  * sin(154 * t) - 0.0793317  * sin(155 * t) +  0.0482511  * sin(156 * t) + 0.0183339  * sin(157 * t) + 0.0361972  * sin(158 * t) -  0.0583656  * sin(159 * t) + 0.0583002  * sin(160 * t) - 0.062947  * sin(161 * t) -  0.0171046  * sin(162 * t) - 0.0467777  * sin(163 * t) + 0.0399968  * sin(164 * t) +  0.00863567  * sin(165 * t) - 0.0151615  * sin(166 * t) -  0.0683881  * sin(167 * t) + 0.0277447  * sin(168 * t) + 0.0486322  * sin(169 * t) -  0.0339654  * sin(170 * t) + 0.0086374  * sin(171 * t) - 0.0619667  * sin(172 * t) +  0.0590189  * sin(173 * t) - 0.0527798  * sin(174 * t) + 0.045006  * sin(175 * t) -  0.0536001  * sin(176 * t) + 0.0138024  * sin(177 * t) - 0.0209096  * sin(178 * t) +  0.00888768  * sin(179 * t) + 0.0215103  * sin(180 * t) -  0.0826694  * sin(181 * t) + 0.0518797  * sin(182 * t) - 0.0608018  * sin(183 * t) +  0.0420456  * sin(184 * t) - 0.0372902  * sin(185 * t) - 0.0116312  * sin(186 * t) -  0.0296972  * sin(187 * t) + 0.0044715  * sin(188 * t) - 0.0194927  * sin(189 * t) -  0.0166453  * sin(190 * t) + 0.0806305  * sin(191 * t) - 0.0476877  * sin(192 * t) +  0.0125975  * sin(193 * t) - 0.0319474  * sin(194 * t) + 0.0165094  * sin(195 * t) -  0.017966  * sin(196 * t) + 0.035911  * sin(197 * t) - 0.00543081  * sin(198 * t) +  0.0140139  * sin(199 * t) + 0.0315385  * sin(200 * t);
}

#endif
