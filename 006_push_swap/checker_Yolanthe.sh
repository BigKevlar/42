#!/bin/bash

CHECKER_NAME="./checker_MAC"

ARG_EMPTY=""

ARG_WRONG1="0 one 2"

ARG_WRONG2="0 4 8 9 4"

ARG_WRONG3="0 6 3147483647 5 7"

ARG1_100="495 9 789 4 491 133 601 418 114 97 882 231 488 53 476 615 121 126 798 388 233 676 708 727 275 118 547 463 737 579 874 883 669 953 486 914 30 641 619 614 439 371 935 550 566 570 368 433 826 880 688 859 28 119 849 848 958 490 710 424 820 96 80 902 60 742 938 576 111 51 734 855 151 157 443 95 266 850 808 188 657 920 357 177 451 265 814 997 136 589 694 539 845 344 636 314 803 731 573 712"

ARG2_100="228 785 645 703 159 358 294 604 658 210 290 1000 188 770 679 490 351 774 164 798 419 293 177 644 976 304 152 151 170 371 27 93 845 513 274 865 144 130 526 948 341 451 230 629 183 240 623 617 791 483 719 817 758 265 78 851 109 28 787 252 815 640 975 56 434 204 136 673 268 792 116 994 612 974 869 23 746 254 656 693 657 105 212 556 176 432 193 330 750 622 577 83 596 437 34 285 935 672 537 39"

ARG3_100="303 899 824 813 193 525 909 543 758 840 416 942 112 172 910 445 86 952 300 984 3 400 60 255 715 132 607 908 901 289 974 712 748 191 142 325 820 851 595 352 210 619 161 668 767 727 603 94 923 766 624 905 921 768 730 453 371 922 687 216 546 367 702 469 246 806 737 250 588 242 710 614 187 591 312 366 465 113 385 502 202 807 211 75 643 443 436 58 458 91 114 647 836 38 866 89 564 958 162 462"

ARG4_100="840 945 573 475 592 609 818 651 406 726 64 689 656 520 794 897 209 69 583 916 955 886 814 139 130 659 428 826 846 439 419 643 805 614 985 94 177 981 771 499 793 839 238 178 245 899 385 67 467 696 731 746 307 545 578 830 344 508 261 333 703 414 84 760 600 437 720 216 934 834 668 965 529 777 816 247 159 626 305 430 751 802 702 628 497 233 191 829 938 282 586 601 153 812 379 339 673 192 340 242"

ARG5_100="176 676 21 900 14 620 318 321 894 178 962 384 288 891 754 383 20 868 928 673 781 811 54 602 952 869 761 845 543 518 276 536 207 730 356 367 219 662 444 642 84 670 559 909 33 248 362 347 675 48 250 360 973 159 626 923 563 381 942 571 892 881 535 264 158 266 386 570 484 235 467 406 209 312 969 81 13 260 274 109 60 867 142 175 579 993 679 837 631 815 289 421 719 308 103 548 73 217 726 28"

ARG6_100="87 823 611 952 516 198 585 665 163 209 503 280 317 924 465 324 111 398 605 763 781 254 983 276 219 528 284 315 385 313 566 368 94 527 920 55 969 189 750 725 125 451 435 480 418 873 356 53 812 946 558 583 475 776 970 397 318 857 462 630 858 363 794 453 937 354 186 932 977 915 388 963 617 542 212 856 541 341 358 820 120 817 423 326 115 925 961 730 460 722 810 801 803 638 980 568 612 601 330 788"

ARG7_100="274 581 874 585 62 558 815 300 287 89 391 644 147 800 932 485 497 673 494 10 553 123 406 301 155 761 224 983 681 288 797 769 119 192 642 276 281 41 668 369 802 145 217 56 234 42 657 989 513 615 873 755 882 963 965 483 771 349 17 481 713 340 984 315 959 479 597 652 436 587 463 302 728 356 640 509 609 679 264 956 411 764 223 623 174 187 146 646 216 457 130 413 627 394 190 810 857 342 200 293"

ARG8_100="606 812 896 114 898 940 760 390 629 599 75 147 307 558 922 744 952 530 858 727 62 388 755 430 125 900 505 374 559 468 123 136 23 722 242 346 378 37 826 686 269 398 859 899 244 601 365 548 693 729 343 958 684 662 659 386 711 81 419 28 11 992 901 749 289 752 977 612 15 87 262 642 855 76 495 948 540 456 171 56 433 756 835 905 904 1 706 45 288 205 560 148 450 192 44 745 725 700 616 827"

ARG9_100="748 230 967 481 4 456 953 891 180 539 40 1000 462 229 53 931 483 591 309 713 194 292 935 288 930 195 987 398 172 15 984 937 199 325 94 939 853 336 98 52 979 215 455 216 151 12 725 714 574 155 2 874 96 724 811 92 427 383 222 429 787 377 442 102 497 361 198 14 881 803 191 197 795 622 660 870 139 766 273 890 289 863 304 701 757 676 135 918 192 472 886 251 681 93 253 267 990 728 996 320"

ARG10_100="237 817 877 478 78 848 499 866 752 511 305 366 646 629 526 523 415 668 53 790 920 968 402 863 753 141 234 862 465 600 947 207 729 794 813 296 50 171 421 426 98 410 532 832 880 577 918 367 444 675 579 279 123 49 146 578 534 114 286 974 967 990 203 766 929 731 932 673 951 632 199 246 979 916 291 473 567 368 392 104 734 137 670 56 875 127 3 144 435 894 102 204 256 272 455 520 31 987 289 893"

ARG1_500="767 306 170 171 157 169 962 835 617 459 756 729 828 827 378 934 524 488 267 325 551 224 884 66 527 618 760 860 292 403 710 264 90 67 695 844 492 449 337 580 697 2 885 357 953 803 989 783 18 398 465 639 911 262 868 582 598 92 793 784 56 940 633 712 957 622 721 707 386 410 539 898 818 623 774 882 640 796 294 133 771 638 649 424 830 913 992 163 919 228 112 76 758 930 503 995 233 373 968 776 877 209 605 462 591 432 227 242 965 231 43 513 7 285 809 979 388 302 307 937 931 329 568 657 367 478 978 156 416 641 505 358 654 635 408 800 151 258 247 553 664 590 808 875 610 24 763 500 613 604 379 990 518 678 143 73 545 630 715 473 842 106 921 206 279 969 677 735 446 139 685 375 75 904 88 807 504 575 840 461 845 82 100 706 442 653 681 886 339 400 832 787 477 355 637 3 662 485 323 381 730 762 356 869 181 393 324 825 659 447 118 602 572 658 246 829 219 196 660 616 775 675 741 237 166 102 578 342 528 115 918 673 498 291 79 779 360 515 747 9 589 949 464 595 1 717 871 740 646 987 179 535 222 620 254 908 955 558 377 287 892 548 309 689 174 25 852 64 207 903 964 863 369 200 13 669 394 47 212 511 624 944 952 667 422 668 241 415 300 956 317 541 72 941 384 570 546 361 666 950 516 794 615 274 731 696 529 837 474 343 795 406 160 295 879 576 50 716 786 126 594 55 214 981 557 549 261 101 238 184 346 993 895 70 205 841 543 65 68 204 402 198 117 574 226 186 748 650 221 888 93 161 663 754 737 450 966 636 711 87 560 975 425 611 121 723 733 959 454 489 817 961 177 426 963 444 926 507 230 354 676 248 203 797 701 530 119 534 218 977 313 815 655 554 28 19 328 332 311 533 920 495 704 326 487 750 138 282 810 451 30 440 397 448 220 51 647 6 626 780 757 526 376 288 634 644 929 811 722 59 470 822 359 420 923 866 350 542 27 460 434 725 272 912 585 283 427 935 141 493 719 853 642 792 263 726 569 44 522 54 563 256 146 35 972 453 103 974 36 81 799 612 140 457 573 57 188 481 943 831 172 501 235 62 736 550 273 688 385 327 670 584 894 125 399 785 917 764 69 632"

ARG2_500="35 545 950 916 887 977 118 820 219 496 793 579 849 201 224 580 798 823 609 452 15 818 144 918 694 292 55 966 348 679 445 42 222 490 414 541 702 592 630 637 431 417 49 227 371 380 520 178 395 707 442 156 473 536 357 139 310 844 399 734 238 602 338 521 552 315 272 759 769 979 230 350 209 128 851 509 391 459 60 242 420 703 353 446 709 114 213 760 735 280 456 671 830 364 928 33 262 168 106 799 261 537 72 108 712 845 366 896 730 507 432 267 102 26 604 768 316 170 594 11 407 791 788 370 736 326 192 689 142 627 218 868 423 86 298 82 255 809 285 535 503 543 652 449 52 266 12 745 789 413 466 172 113 864 289 212 307 14 377 921 621 976 914 245 342 812 529 96 439 636 951 670 10 587 771 363 70 958 372 159 18 217 986 309 758 90 577 877 337 25 214 32 750 964 321 105 795 166 856 56 410 46 441 205 547 402 184 993 472 814 341 667 658 773 909 721 198 718 140 195 728 889 732 675 356 107 202 996 680 780 638 88 161 546 403 17 723 190 221 866 320 483 228 706 567 435 835 354 526 20 968 585 642 936 28 401 498 740 264 148 419 66 41 808 933 533 855 684 9 330 127 739 150 481 176 738 182 293 250 115 378 669 949 570 229 513 749 181 962 819 682 825 5 766 206 713 2 838 236 271 135 696 504 248 290 583 73 710 549 553 428 876 726 275 940 470 335 777 681 920 8 872 360 389 69 699 843 697 104 21 861 971 992 319 576 484 990 657 447 988 544 610 476 886 963 4 157 465 474 571 368 755 523 444 314 246 89 137 854 98 944 136 117 575 775 846 839 393 65 674 800 390 347 857 296 774 355 999 188 302 897 208 92 956 210 945 365 110 716 752 805 892 606 415 409 691 44 232 123 324 286 132 601 491 240 53 216 145 967 300 81 688 619 463 853 884 64 40 462 917 497 906 109 424 643 514 660 187 260 647 829 803 994 329 888 650 83 562 453 381 881 969 6 600 259 475 163 742 385 492 651 923 31 331 129 591 677 77 912 252 516 94 194 558 189 299 790 16 659 505 737 352 850 893 972 883 111 30 998 841 197 634 895 233 67 984 957 641 867 50 433 279 488 97 384 383 858 361 965 164"

ARG3_500="1000 233 248 906 334 442 917 348 33 14 561 932 527 410 934 795 317 205 713 671 118 720 309 706 684 989 415 653 379 390 389 380 607 742 939 767 965 902 790 291 199 509 29 373 402 600 111 134 468 56 289 144 396 337 985 329 473 941 592 573 94 176 736 228 235 507 503 583 101 921 893 701 894 73 16 920 971 454 778 700 263 261 87 139 127 187 864 44 837 923 805 526 927 901 743 544 791 278 851 669 52 656 629 27 439 269 949 619 536 54 807 99 661 564 562 514 772 240 482 371 748 441 928 888 896 919 961 141 545 427 755 377 868 140 281 913 762 366 703 148 113 606 869 737 459 478 469 93 77 430 560 877 453 280 79 28 299 609 690 726 938 85 483 986 687 623 905 249 532 8 105 540 788 209 715 665 423 216 957 617 721 789 577 912 474 194 34 694 841 331 654 150 581 707 885 264 769 408 783 741 72 121 677 5 19 980 191 116 999 991 300 318 82 886 730 612 764 174 598 106 490 951 963 749 414 457 723 940 744 270 203 682 432 477 861 293 557 521 819 195 528 878 782 63 839 856 212 219 288 446 924 988 226 948 695 17 984 438 170 803 403 350 367 959 815 759 651 518 365 663 493 48 211 636 910 892 510 711 108 444 333 251 305 539 502 426 799 481 543 7 538 338 884 601 37 958 58 745 185 495 739 268 541 145 882 443 35 6 580 925 491 768 718 615 312 643 652 668 572 122 954 967 770 977 973 756 622 597 574 431 173 937 969 646 981 689 992 61 566 950 120 530 699 175 253 363 46 710 445 45 586 579 559 142 673 222 582 588 962 879 354 751 891 944 486 542 255 624 418 69 138 172 930 554 933 285 376 812 571 487 126 830 180 210 217 440 290 297 428 241 794 86 915 638 159 238 81 672 437 369 904 702 151 302 647 698 272 688 776 855 165 236 405 39 681 685 781 231 66 324 266 392 512 26 152 112 455 179 136 232 332 352 568 982 575 637 849 515 705 605 202 130 987 840 828 801 458 499 422 947 304 678 833 223 818 633 49 926 1 752 401 709 100 322 983 275 51 370 76 326 78 731 522 621 472 208 411 200 308 674 826 809 489 775 556 43 907 25 75 137 178 895 162 461 850 310 513 997 679 283"

ARG4_500="975 760 981 657 331 6 876 939 480 698 866 39 608 195 827 804 234 313 182 891 106 123 326 772 862 744 63 886 810 373 424 133 883 405 250 11 368 627 285 847 201 115 727 893 601 945 730 978 45 815 579 327 81 88 17 963 594 129 143 149 530 117 343 900 859 263 982 228 57 503 955 441 177 867 736 556 840 363 630 656 140 251 533 647 618 526 616 604 712 626 238 142 85 476 132 428 355 47 256 246 861 348 865 756 96 755 377 590 253 539 857 950 695 751 35 971 94 991 988 205 980 911 89 108 869 555 875 365 370 668 936 677 737 855 70 552 300 598 67 420 399 497 186 629 72 992 76 645 362 204 466 486 933 189 237 634 293 248 786 566 747 937 462 136 655 484 919 155 667 720 895 34 385 643 456 403 838 430 410 25 61 491 628 103 231 440 619 337 158 732 518 354 913 904 509 951 470 244 461 839 762 931 192 41 280 169 777 640 605 485 520 921 33 303 942 587 798 304 659 99 137 360 258 704 957 593 696 793 856 595 848 69 597 985 983 206 315 908 849 729 968 910 846 504 284 288 926 502 506 146 271 569 817 314 15 344 925 472 686 825 571 389 534 535 779 24 638 624 391 287 885 113 653 548 71 929 826 902 880 239 743 964 328 311 735 100 86 496 519 419 542 565 582 581 637 570 603 128 528 580 830 609 887 110 823 986 831 352 783 147 633 404 74 161 660 316 232 338 202 240 845 179 700 450 105 1000 341 800 878 359 198 141 487 829 400 907 172 473 233 378 813 631 787 298 959 32 180 797 956 4 492 897 934 524 156 290 816 996 153 748 455 397 325 691 708 358 309 819 759 969 979 877 717 164 90 927 905 154 507 513 834 386 260 651 778 669 423 294 896 663 8 796 283 332 416 443 714 453 997 176 225 674 214 297 740 680 148 159 310 452 917 739 577 960 702 436 746 308 573 312 42 104 2 961 713 868 227 889 505 940 18 549 613 289 469 741 247 683 272 268 125 36 261 437 255 824 854 770 699 138 51 785 374 962 79 773 676 679 28 763 324 241 279 850 490 5 557 697 559 575 254 322 562 408 299 901 482 266 97 872 694 833 306 323 822 340 219 301 501 382 92 199 941 111 151 23 731 688 252 27"

ARG5_500="950 382 165 983 272 384 882 933 506 994 25 136 495 691 394 723 23 834 606 22 378 867 311 201 403 531 197 741 570 522 690 934 429 518 919 608 19 258 954 602 434 980 568 945 951 497 205 894 705 121 605 450 261 334 426 932 659 13 41 85 764 5 594 937 226 399 453 170 887 676 303 650 292 484 821 835 622 208 285 876 848 554 735 511 666 680 276 616 67 765 178 138 131 972 681 688 860 243 740 158 768 792 39 481 756 553 47 694 267 162 545 209 177 388 230 903 862 173 542 50 357 998 422 582 661 7 304 109 183 145 332 749 99 124 673 809 149 777 555 331 626 567 832 886 598 204 675 172 410 370 68 585 695 146 431 119 902 75 868 44 147 645 713 579 94 343 925 469 976 549 419 501 299 771 677 316 758 580 910 955 435 78 992 776 875 593 366 982 965 64 295 577 103 536 573 42 91 811 896 564 789 446 202 141 489 872 853 443 929 461 816 959 824 386 341 206 134 829 412 424 274 6 102 628 904 808 169 84 339 697 203 979 20 575 574 944 877 318 401 924 213 374 636 349 537 61 993 58 420 762 430 228 242 988 947 449 255 878 375 873 409 368 649 607 943 751 662 321 525 26 969 37 232 513 500 683 428 210 519 328 294 611 397 475 125 310 133 521 850 369 194 523 116 619 379 313 556 796 166 425 928 949 750 224 53 214 122 527 914 889 654 40 464 278 733 216 550 790 906 302 817 893 997 767 922 728 168 974 392 672 268 753 163 130 308 63 838 4 282 231 457 699 849 794 17 486 717 140 387 479 371 600 663 647 863 111 529 398 233 766 411 655 895 248 712 333 757 96 856 503 774 738 658 97 743 870 971 869 517 33 885 227 36 643 538 289 664 739 275 999 857 815 57 28 215 566 363 236 340 271 309 120 474 533 752 890 252 350 468 509 499 609 15 759 539 800 591 948 845 18 830 184 528 927 144 196 153 806 390 48 199 921 336 558 715 859 569 56 110 990 700 305 454 578 325 589 260 389 908 652 123 3 186 290 89 189 496 113 156 43 269 192 182 632 52 400 438 297 629 940 436 381 804 995 847 235 279 492 466 797 448 211 544 515 218 361 45 188 1000 427 200 963 775 293 571 76 223 14 234 31"

ARGMIN_100="-532 -268 695 129 900 132 -373 265 -652 726 -640 -53 -774 344 730 549 156 -954 -509 993 -997 83 66 689 -285 117 -128 76 -731 453 119 378 -862 -656 -597 573 780 11 -980 450 -291 -601 -814 1 -758 -869 -611 -559 -46 -584 839 47 -512 516 -49 -341 -22 -929 -506 863 -301 387 772 149 54 -160 672 -103 -964 276 -428 73 -374 30 843 -251 -659 -153 -525 -217 -432 609 -989 -970 -593 -604 26 -972 982 -490 -966 528 -735 -344 -185 842 648 -131 -807 -932"

ARGMIN_500="-50 -489 391 847 171 819 950 -371 738 68 -807 -704 -142 164 944 -679 -192 -65 -417 -612 542 -184 993 -814 210 -429 -655 -285 -78 747 855 -603 614 -693 23 143 -55 -76 998 873 668 -535 777 837 -359 745 22 44 -54 409 -363 2 73 -909 -298 -607 -495 93 816 -215 916 487 92 629 -694 -774 507 -919 -409 48 -510 560 -114 128 246 -111 449 -593 617 286 446 -493 -420 793 -624 -332 -238 -932 634 759 974 106 -25 626 796 909 -237 568 -1000 -727 545 602 -551 -4 922 -907 -308 609 -491 -558 913 462 -923 -230 672 122 -675 604 704 -627 102 -185 -428 597 -707 971 -815 185 -450 935 310 103 -882 -392 -316 805 -307 -31 230 256 472 94 -553 -471 -484 430 -971 663 -140 322 -999 49 648 32 -182 -380 -545 836 -200 985 -854 -9 410 165 -892 903 778 433 -5 0 -91 -826 193 701 861 -372 -322 -503 -112 -602 -583 447 -852 860 891 -494 -758 828 -776 -467 464 489 232 564 -870 523 333 -277 -990 1 888 846 46 943 273 -148 350 212 -899 -972 -891 299 -74 -916 766 -348 29 76 108 263 -433 360 -570 683 -641 782 -857 -600 951 274 984 425 480 -144 260 -716 544 415 -423 151 972 -974 -580 -921 832 -459 179 698 -260 -452 109 -683 790 370 276 941 264 906 -771 764 175 -739 -790 340 -508 -985 -47 222 -770 324 -706 -159 -266 -947 -23 934 -228 -781 -618 -360 -132 639 -492 686 -828 -165 -532 -162 548 960 328 -396 -935 -645 826 -117 -939 665 -595 -418 167 255 -951 120 -962 565 -329 -809 -626 710 900 -118 -227 670 402 -169 -748 473 -943 353 -695 -868 -730 432 218 -665 -48 673 915 456 653 25 385 320 -499 457 -941 -67 -945 -968 224 441 851 -61 524 869 -911 595 -547 566 -95 -213 -331 929 476 -294 908 81 -569 -778 892 -419 323 746 199 608 -953 801 -980 -305 -86 986 159 -777 -816 -640 804 -293 -149 516 953 -75 -960 -575 650 -760 552 158 -339 436 719 821 -991 90 878 316 154 -29 -259 -268 -958 -480 261 624 277 -223 734 -630 490 -930 265 -449 -317 563 707 -862 470 -983 380 -795 977 594 -872 -702 130 -291 -913 -699 15 117 346 -206 942 880 -773 180 245 -133 -134 534 -368 -598 757 -931 -465 -912 66 949 140 303 914 -660 139 620 411 -177 515 336 -334 -541 363 40 -982 767 693 -486 -245 266 -458 148 661 991 126 -208 611 -511 -186 -684 -26 -46 -717 572 -226 -988 844 482 91 215 -700 -422 884 -481 -571 403 -84 488 -141 -28 582 223"

echo "\033[0;34mWith an empty argument:\033[0m"

./push_swap $ARG_EMPTY
./push_swap $ARG_EMPTY | $CHECKER_NAME $ARG_EMPTY
RESULT=$(./push_swap $ARG_EMPTY | $CHECKER_NAME $ARG_EMPTY)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith an argument that is not an int (should give \033[0m\033[1;31mError\033[0m\033[0;34m):\033[0m"

./push_swap $ARG_WRONG1
RESULT=$(./push_swap $ARG_WRONG1 | $CHECKER_NAME $ARG_WRONG1 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith an argument that is bigger than int (should give \033[0m\033[1;31mError\033[0m\033[0;34m):\033[0m"

./push_swap $ARG_WRONG3
RESULT=$(./push_swap $ARG_WRONG3 | $CHECKER_NAME $ARG_WRONG3 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith an argument that has a duplicate (should give \033[0m\033[1;31mError\033[0m\033[0;34m):\033[0m"

./push_swap $ARG_WRONG2
RESULT=$(./push_swap $ARG_WRONG2 | $CHECKER_NAME $ARG_WRONG2 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith ordered arguments:\033[0m"

ARG_ORD="1 2 3 4 5"
./push_swap $ARG_ORD | wc -l | bc
RESULT=$(./push_swap $ARG_ORD | $CHECKER_NAME $ARG_ORD 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

ARG_ORD="-350 -261 -98 0 45 1402 2000"
./push_swap $ARG_ORD | wc -l | bc
RESULT=$(./push_swap $ARG_ORD | $CHECKER_NAME $ARG_ORD 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

ARG_ORD="1 3 4 7 8"
./push_swap $ARG_ORD | wc -l | bc
RESULT=$(./push_swap $ARG_ORD | $CHECKER_NAME $ARG_ORD 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith 1 argument:\033[0m"

./push_swap 42 | wc -l | bc
RESULT=$(./push_swap 42 | $CHECKER_NAME 42 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith 2 arguments:\033[0m"

./push_swap 2 14 | wc -l | bc
RESULT=$(./push_swap 2 14 | $CHECKER_NAME 2 14 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

./push_swap 14 2 | wc -l | bc
RESULT=$(./push_swap 14 2 | $CHECKER_NAME 14 2 2>&1)
if [ "$RESULT" = "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith 3 arguments:\033[0m"

for i in {1..3}
do
	for j in {1..3}
	do
		if [ $j != $i ]
		then
			for k in {1..3}
			do
				if [ $k != $j ] && [ $k != $i ]
				then
					./push_swap $i $j $k | wc -l | bc
					RESULT=$(./push_swap $i $j $k | $CHECKER_NAME $i $j $k 2>&1)
					if [ $RESULT == "OK" ]
					then
						echo "\033[1;32mOK\033[0m"
					else
						echo "\033[1;31m$RESULT\033[0m"
					fi
				fi
			done
		fi
	done
done

echo
echo "\033[0;34mWith 5 arguments:\033[0m"

for m in {1..5}
do
	for n in {1..5}
	do
		if [ $n != $m ]
		then
			for i in {1..5}
			do
				if [ $i != $m ] && [ $i != $n ]
				then
					for j in {1..5}
					do
						if [ $j != $m ] && [ $j != $n ] && [ $j != $i ]
						then
							for k in {1..5}
							do
								if [ $k != $m ] && [ $k != $n ] && [ $k != $j ] && [ $k != $i ]
								then
									./push_swap $m $n $i $j $k | wc -l | bc
									RESULT=$(./push_swap $m $n $i $j $k | $CHECKER_NAME $m $n $i $j $k 2>&1)
									if [ $RESULT == "OK" ]
									then
										echo "\033[1;32mOK\033[0m"
									else
										echo $m $n $i $j $k
										echo "\033[1;31m$RESULT\033[0m"
									fi
								fi
							done
						fi
					done
				fi
			done
		fi
	done
done

echo
echo "\033[0;34mWith 100 valid arguments:\033[0m"

./push_swap $ARG1_100 | wc -l | bc
RESULT=$(./push_swap $ARG1_100 | $CHECKER_NAME $ARG1_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG2_100 | wc -l | bc
RESULT=$(./push_swap $ARG2_100 | $CHECKER_NAME $ARG2_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG3_100 | wc -l | bc
RESULT=$(./push_swap $ARG3_100 | $CHECKER_NAME $ARG3_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG4_100 | wc -l | bc
RESULT=$(./push_swap $ARG4_100 | $CHECKER_NAME $ARG4_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG5_100 | wc -l | bc
RESULT=$(./push_swap $ARG5_100 | $CHECKER_NAME $ARG5_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG6_100 | wc -l | bc
RESULT=$(./push_swap $ARG6_100 | $CHECKER_NAME $ARG6_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG7_100 | wc -l | bc
RESULT=$(./push_swap $ARG7_100 | $CHECKER_NAME $ARG7_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG8_100 | wc -l | bc
RESULT=$(./push_swap $ARG8_100 | $CHECKER_NAME $ARG8_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG9_100 | wc -l | bc
RESULT=$(./push_swap $ARG9_100 | $CHECKER_NAME $ARG9_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG10_100 | wc -l | bc
RESULT=$(./push_swap $ARG10_100 | $CHECKER_NAME $ARG10_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith 500 valid arguments:\033[0m"

./push_swap $ARG1_500 | wc -l | bc
RESULT=$(./push_swap $ARG1_500 | $CHECKER_NAME $ARG1_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG2_500 | wc -l | bc
RESULT=$(./push_swap $ARG2_500 | $CHECKER_NAME $ARG2_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG3_500 | wc -l | bc
RESULT=$(./push_swap $ARG3_500 | $CHECKER_NAME $ARG3_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG4_500 | wc -l | bc
RESULT=$(./push_swap $ARG4_500 | $CHECKER_NAME $ARG4_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARG5_500 | wc -l | bc
RESULT=$(./push_swap $ARG5_500 | $CHECKER_NAME $ARG5_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi

echo
echo "\033[0;34mWith 100/500 valid arguments of which some are negative:\033[0m"

./push_swap $ARGMIN_100 | wc -l | bc
RESULT=$(./push_swap $ARGMIN_100 | $CHECKER_NAME $ARGMIN_100 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi
./push_swap $ARGMIN_500 | wc -l | bc
RESULT=$(./push_swap $ARGMIN_500 | $CHECKER_NAME $ARGMIN_500 2>&1)
if [ $RESULT == "OK" ]
then
	echo "\033[1;32mOK\033[0m"
else
	echo "\033[1;31m$RESULT\033[0m"
fi