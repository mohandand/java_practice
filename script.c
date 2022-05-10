Script started on 2022-05-04 17:22:07-04:00 [TERM="xterm-256color" TTY="/dev/pts
/0" COLUMNS="203" LINES="48"]
mohan@mohan-VirtualBox:~$ gcc -pthread Producer_Consumer_Middleman.c
mohan@mohan-VirtualBox:~$ gcc Producer_Consumer_Middleman.c -o Producer_Consumer
_Middleman -pthread
mohan@mohan-VirtualBox:~$ ./Producer_Consumer_Middleman 50 1 1 1
Main thread beginning
Creating  producer thread with id 139981180901120
Creating  middleman thread with id 139981172508416
Creating consumer thread with id 139981164115712
 Main thread sleeping for 50 seconds 
Producer thread 139981180901120 sleeping for 2 seconds 
 Middleman thread 139981172508416 sleeping for 2 seconds 
 Consumer thread 139981164115712 sleeping for 1 seconds 
 Insert_item inserted item 16 at position 0
[16][empty][empty][empty][empty] in=1 , out=0 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 16
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 16 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 16
Insert_item inserted item 16 at position 0
[16][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 16
Middleman thread 139981172508416 sleeping for 2 seconds 
 Remove_item removed item 16 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 16 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Insert_item inserted item 43 at position 1
[empty][43][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 43
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 43 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 43
Insert_item inserted item 43 at position 1
[empty][43][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 43
Middleman thread 139981172508416 sleeping for 2 seconds 
 Remove_item removed item 43 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 43 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Insert_item inserted item 28 at position 2
[empty][empty][28][empty][empty] in=3 , out=2 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 28
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 28 at position 2
[empty][empty][empty][empty][empty] in=3 , out=3 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 28
Insert_item inserted item 28 at position 2
[empty][empty][28][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 28
Middleman thread 139981172508416 sleeping for 2 seconds 
 Remove_item removed item 28 at position 2
[empty][empty][empty][empty][empty] in=3 , out=3 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 28 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Insert_item inserted item 27 at position 3
[empty][empty][empty][27][empty] in=4 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 27
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 27 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 27
Insert_item inserted item 27 at position 3
[empty][empty][empty][27][empty] in=4 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 27
Middleman thread 139981172508416 sleeping for 1 seconds 
 Insert_item inserted item 23 at position 4
[empty][empty][empty][empty][23] in=0 , out=4 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 23
Producer thread 139981180901120 sleeping for 2 seconds 
 Remove_item removed item 23 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 23
Insert_item inserted item 23 at position 4
[empty][empty][empty][27][23] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 23
Middleman thread 139981172508416 sleeping for 3 seconds 
 Remove_item removed item 27 at position 3
[empty][empty][empty][empty][23] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 27 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Insert_item inserted item 18 at position 0
[18][empty][empty][empty][empty] in=1 , out=0 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 18
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 18 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 18
Insert_item inserted item 18 at position 0
[18][empty][empty][empty][23] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 18
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 31 at position 1
[empty][31][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 31
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 23 at position 4
[18][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 23 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 18 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 18 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 31 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 31
Insert_item inserted item 31 at position 1
[empty][31][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 31
Middleman thread 139981172508416 sleeping for 2 seconds 
 Insert_item inserted item 30 at position 2
[empty][empty][30][empty][empty] in=3 , out=2 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 30
Producer thread 139981180901120 sleeping for 1 seconds 
 Insert_item inserted item 23 at position 3
[empty][empty][30][23][empty] in=4 , out=2 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 23
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 31 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 31 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Remove_item removed item 30 at position 2
[empty][empty][empty][23][empty] in=4 , out=3 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 30
Insert_item inserted item 30 at position 2
[empty][empty][30][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 30
Middleman thread 139981172508416 sleeping for 1 seconds 
 Insert_item inserted item 44 at position 4
[empty][empty][empty][23][44] in=0 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 44
Producer thread 139981180901120 sleeping for 2 seconds 
 Remove_item removed item 23 at position 3
[empty][empty][empty][empty][44] in=0 , out=4 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 23
Insert_item inserted item 23 at position 3
[empty][empty][30][23][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 23
Middleman thread 139981172508416 sleeping for 2 seconds 
 Insert_item inserted item 43 at position 0
[43][empty][empty][empty][44] in=1 , out=4 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 43
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 30 at position 2
[empty][empty][empty][23][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 30 
Consumer thread 139981164115712 sleeping for 1 seconds 
 Remove_item removed item 44 at position 4
[43][empty][empty][empty][empty] in=1 , out=0 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 44
Insert_item inserted item 44 at position 4
[empty][empty][empty][23][44] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 44
Middleman thread 139981172508416 sleeping for 1 seconds 
 Insert_item inserted item 20 at position 1
[43][20][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 20
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 23 at position 3
[empty][empty][empty][empty][44] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 23 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 43 at position 0
[empty][20][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 43
Insert_item inserted item 43 at position 0
[43][empty][empty][empty][44] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 43
Middleman thread 139981172508416 sleeping for 3 seconds 
 Remove_item removed item 44 at position 4
[43][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 44 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Insert_item inserted item 16 at position 2
[empty][20][16][empty][empty] in=3 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 16
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 20 at position 1
[empty][empty][16][empty][empty] in=3 , out=2 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 20
Insert_item inserted item 20 at position 1
[43][20][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 20
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 27 at position 3
[empty][empty][16][27][empty] in=4 , out=2 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 27
Producer thread 139981180901120 sleeping for 2 seconds 
 Remove_item removed item 43 at position 0
[empty][20][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 43 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Insert_item inserted item 7 at position 4
[empty][empty][16][27][7] in=0 , out=2 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 7
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 16 at position 2
[empty][empty][empty][27][7] in=0 , out=3 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 16
Insert_item inserted item 16 at position 2
[empty][20][16][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 16
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 21 at position 0
[21][empty][empty][27][7] in=1 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 21
Producer thread 139981180901120 sleeping for 2 seconds 
 Remove_item removed item 20 at position 1
[empty][empty][16][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 20 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Insert_item inserted item 6 at position 1
[21][6][empty][27][7] in=2 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 6
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 27 at position 3
[21][6][empty][empty][7] in=2 , out=4 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 27
Insert_item inserted item 27 at position 3
[empty][empty][16][27][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 27
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 28 at position 2
[21][6][28][empty][7] in=3 , out=4 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 28
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 16 at position 2
[empty][empty][empty][27][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 16 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Remove_item removed item 7 at position 4
[21][6][28][empty][empty] in=3 , out=0 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 7
Insert_item inserted item 7 at position 4
[empty][empty][empty][27][7] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 7
Middleman thread 139981172508416 sleeping for 2 seconds 
 Insert_item inserted item 30 at position 3
[21][6][28][30][empty] in=4 , out=0 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 30
Producer thread 139981180901120 sleeping for 2 seconds 
 Remove_item removed item 27 at position 3
[empty][empty][empty][empty][7] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 27 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Remove_item removed item 21 at position 0
[empty][6][28][30][empty] in=4 , out=1 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 21
Insert_item inserted item 21 at position 0
[21][empty][empty][empty][7] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 21
Middleman thread 139981172508416 sleeping for 1 seconds 
 Insert_item inserted item 46 at position 4
[empty][6][28][30][46] in=0 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 46
Producer thread 139981180901120 sleeping for 1 seconds 
 Insert_item inserted item 46 at position 0
[46][6][28][30][46] in=1 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 46
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 6 at position 1
[46][empty][28][30][46] in=1 , out=2 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 6
Insert_item inserted item 6 at position 1
[21][6][empty][empty][7] in=2 , out=4 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 6
Middleman thread 139981172508416 sleeping for 1 seconds 
 Remove_item removed item 7 at position 4
[21][6][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 7 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Remove_item removed item 28 at position 2
[46][empty][empty][30][46] in=1 , out=3 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 28
Insert_item inserted item 28 at position 2
[21][6][28][empty][empty] in=3 , out=0 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 28
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 44 at position 1
[46][44][empty][30][46] in=2 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 44
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 21 at position 0
[empty][6][28][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 21 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 30 at position 3
[46][44][empty][empty][46] in=2 , out=4 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 30
Insert_item inserted item 30 at position 3
[empty][6][28][30][empty] in=4 , out=1 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 30
Middleman thread 139981172508416 sleeping for 1 seconds 
 Remove_item removed item 46 at position 4
[46][44][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 46
Insert_item inserted item 46 at position 4
[empty][6][28][30][46] in=0 , out=1 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 46
Middleman thread 139981172508416 sleeping for 1 seconds 
 Remove_item removed item 6 at position 1
[empty][empty][28][30][46] in=0 , out=2 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 6 
Consumer thread 139981164115712 sleeping for 3 seconds 
 Remove_item removed item 46 at position 0
[empty][44][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 46
Insert_item inserted item 46 at position 0
[46][empty][28][30][46] in=1 , out=2 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 46
Middleman thread 139981172508416 sleeping for 3 seconds 
 Insert_item inserted item 35 at position 2
[empty][44][35][empty][empty] in=3 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 35
Producer thread 139981180901120 sleeping for 1 seconds 
 Insert_item inserted item 2 at position 3
[empty][44][35][2][empty] in=4 , out=1 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 2
Producer thread 139981180901120 sleeping for 3 seconds 
 Remove_item removed item 28 at position 2
[46][empty][empty][30][46] in=1 , out=3 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 28 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 44 at position 1
[empty][empty][35][2][empty] in=4 , out=2 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 44
Insert_item inserted item 44 at position 1
[46][44][empty][30][46] in=2 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 44
Middleman thread 139981172508416 sleeping for 1 seconds 
 Remove_item removed item 35 at position 2
[empty][empty][empty][2][empty] in=4 , out=3 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 35
Insert_item inserted item 35 at position 2
[46][44][35][30][46] in=3 , out=3 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 35
Middleman thread 139981172508416 sleeping for 1 seconds 
 Insert_item inserted item 27 at position 4
[empty][empty][empty][2][27] in=0 , out=3 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 27
Producer thread 139981180901120 sleeping for 1 seconds 
 Remove_item removed item 30 at position 3
[46][44][35][empty][46] in=3 , out=4 ,queue=Middleman/Consumer
Consumer thread 139981164115712 removed value 30 
Consumer thread 139981164115712 sleeping for 2 seconds 
 Remove_item removed item 2 at position 3
[empty][empty][empty][empty][27] in=0 , out=4 ,queue=Producer/Middleman
Middleman thread 139981172508416 removed value 2
Insert_item inserted item 2 at position 3
[46][44][35][2][46] in=4 , out=4 ,queue=Middleman/Consumer
Middleman thread 139981172508416 inserted value 2
Middleman thread 139981172508416 sleeping for 2 seconds 
 Insert_item inserted item 27 at position 0
[27][empty][empty][empty][27] in=1 , out=4 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 27
Producer thread 139981180901120 sleeping for 1 seconds 
 Insert_item inserted item 45 at position 1
[27][45][empty][empty][27] in=2 , out=4 ,queue=Producer/Middleman
Producer thread 139981180901120 inserted value 45
Producer thread 139981180901120 sleeping for 3 seconds 
 Main thread exiting
mohan@mohan-VirtualBox:~$ gcc Producer_Consumer_Middleman.c -o Producer_Consumer
_Middleman -pthread       ./Producer_Consumer_Middleman 50 2 2 2
Main thread beginning
Creating  producer thread with id 140162751125248
Creating  producer thread with id 140162742732544
Creating  middleman thread with id 140162734339840
Creating  middleman thread with id 140162725947136
Creating consumer thread with id 140162717554432
Creating consumer thread with id 140162709161728
 Main thread sleeping for 50 seconds 
Producer thread 140162751125248 sleeping for 2 seconds 
 Producer thread 140162742732544 sleeping for 2 seconds 
 Middleman thread 140162734339840 sleeping for 1 seconds 
 Middleman thread 140162725947136 sleeping for 2 seconds 
 Consumer thread 140162717554432 sleeping for 3 seconds 
 Consumer thread 140162709161728 sleeping for 2 seconds 
 Insert_item inserted item 37 at position 0
[37][empty][empty][empty][empty] in=1 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 37
Producer thread 140162751125248 sleeping for 1 seconds 
 Insert_item inserted item 50 at position 1
[37][50][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 50
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 37 at position 0
[empty][50][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 37
Insert_item inserted item 37 at position 0
[37][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 37
Middleman thread 140162725947136 sleeping for 3 seconds 
 Remove_item removed item 37 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 37 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 50 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 50
Insert_item inserted item 50 at position 1
[empty][50][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 50
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 50 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 50 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Insert_item inserted item 14 at position 2
[empty][empty][14][empty][empty] in=3 , out=2 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 14
Producer thread 140162751125248 sleeping for 2 seconds 
 Insert_item inserted item 41 at position 3
[empty][empty][14][41][empty] in=4 , out=2 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 41
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 14 at position 2
[empty][empty][empty][41][empty] in=4 , out=3 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 14
Insert_item inserted item 14 at position 2
[empty][empty][14][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 14
Middleman thread 140162725947136 sleeping for 2 seconds 
 Remove_item removed item 41 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 41
Insert_item inserted item 41 at position 3
[empty][empty][14][41][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 41
Middleman thread 140162734339840 sleeping for 2 seconds 
 Remove_item removed item 14 at position 2
[empty][empty][empty][41][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 14 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Insert_item inserted item 19 at position 4
[empty][empty][empty][empty][19] in=0 , out=4 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 19
Producer thread 140162751125248 sleeping for 1 seconds 
 Insert_item inserted item 30 at position 0
[30][empty][empty][empty][19] in=1 , out=4 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 30
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 41 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 41 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Insert_item inserted item 13 at position 1
[30][13][empty][empty][19] in=2 , out=4 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 13
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 19 at position 4
[30][13][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 19
Insert_item inserted item 19 at position 4
[empty][empty][empty][empty][19] in=0 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 19
Middleman thread 140162725947136 sleeping for 2 seconds 
 Remove_item removed item 30 at position 0
[empty][13][empty][empty][empty] in=2 , out=1 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 30
Insert_item inserted item 30 at position 0
[30][empty][empty][empty][19] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 30
Middleman thread 140162734339840 sleeping for 2 seconds 
 Remove_item removed item 19 at position 4
[30][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 19 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Insert_item inserted item 3 at position 2
[empty][13][3][empty][empty] in=3 , out=1 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 3
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 30 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 30 
Consumer thread 140162717554432 sleeping for 1 seconds 
 Insert_item inserted item 20 at position 3
[empty][13][3][20][empty] in=4 , out=1 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 20
Producer thread 140162751125248 sleeping for 1 seconds 
 Remove_item removed item 13 at position 1
[empty][empty][3][20][empty] in=4 , out=2 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 13
Insert_item inserted item 13 at position 1
[empty][13][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 13
Middleman thread 140162725947136 sleeping for 2 seconds 
 Remove_item removed item 3 at position 2
[empty][empty][empty][20][empty] in=4 , out=3 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 3
Insert_item inserted item 3 at position 2
[empty][13][3][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 3
Middleman thread 140162734339840 sleeping for 2 seconds 
 Insert_item inserted item 12 at position 4
[empty][empty][empty][20][12] in=0 , out=3 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 12
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 13 at position 1
[empty][empty][3][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 13 
Consumer thread 140162717554432 sleeping for 1 seconds 
 Insert_item inserted item 24 at position 0
[24][empty][empty][20][12] in=1 , out=3 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 24
Producer thread 140162751125248 sleeping for 1 seconds 
 Remove_item removed item 3 at position 2
[empty][empty][empty][empty][empty] in=3 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 3 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Insert_item inserted item 35 at position 1
[24][35][empty][20][12] in=2 , out=3 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 35
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 20 at position 3
[24][35][empty][empty][12] in=2 , out=4 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 20
Insert_item inserted item 20 at position 3
[empty][empty][empty][20][empty] in=4 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 20
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 20 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 20 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 12 at position 4
[24][35][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 12
Insert_item inserted item 12 at position 4
[empty][empty][empty][empty][12] in=0 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 12
Middleman thread 140162725947136 sleeping for 3 seconds 
 Insert_item inserted item 21 at position 2
[24][35][21][empty][empty] in=3 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 21
Producer thread 140162742732544 sleeping for 3 seconds 
 Insert_item inserted item 27 at position 3
[24][35][21][27][empty] in=4 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 27
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 12 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 12 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Insert_item inserted item 7 at position 4
[24][35][21][27][7] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 7
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 24 at position 0
[empty][35][21][27][7] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 24
Insert_item inserted item 24 at position 0
[24][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 24
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 24 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 24 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 35 at position 1
[empty][empty][21][27][7] in=0 , out=2 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 35
Insert_item inserted item 35 at position 1
[empty][35][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 35
Middleman thread 140162725947136 sleeping for 2 seconds 
 Insert_item inserted item 32 at position 0
[32][empty][21][27][7] in=1 , out=2 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 32
Producer thread 140162751125248 sleeping for 1 seconds 
 Insert_item inserted item 26 at position 1
[32][26][21][27][7] in=2 , out=2 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 26
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 35 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 35 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 21 at position 2
[32][26][empty][27][7] in=2 , out=3 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 21
Insert_item inserted item 21 at position 2
[empty][empty][21][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 21
Middleman thread 140162725947136 sleeping for 3 seconds 
 Insert_item inserted item 28 at position 2
[32][26][28][27][7] in=3 , out=3 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 28
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 27 at position 3
[32][26][28][empty][7] in=3 , out=4 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 27
Insert_item inserted item 27 at position 3
[empty][empty][21][27][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 27
Middleman thread 140162734339840 sleeping for 1 seconds 
 Remove_item removed item 21 at position 2
[empty][empty][empty][27][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 21 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 7 at position 4
[32][26][28][empty][empty] in=3 , out=0 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 7
Insert_item inserted item 7 at position 4
[empty][empty][empty][27][7] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 7
Middleman thread 140162734339840 sleeping for 3 seconds 
 Insert_item inserted item 25 at position 3
[32][26][28][25][empty] in=4 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 25
Producer thread 140162742732544 sleeping for 1 seconds 
 Insert_item inserted item 33 at position 4
[32][26][28][25][33] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 33
Producer thread 140162751125248 sleeping for 1 seconds 
 Remove_item removed item 27 at position 3
[empty][empty][empty][empty][7] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 27 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 7 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 7 
Consumer thread 140162709161728 sleeping for 1 seconds 
 Remove_item removed item 32 at position 0
[empty][26][28][25][33] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 32
Insert_item inserted item 32 at position 0
[32][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 32
Middleman thread 140162725947136 sleeping for 3 seconds 
 Insert_item inserted item 15 at position 0
[15][26][28][25][33] in=1 , out=1 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 15
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 32 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 32 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 26 at position 1
[15][empty][28][25][33] in=1 , out=2 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 26
Insert_item inserted item 26 at position 1
[empty][26][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 26
Middleman thread 140162734339840 sleeping for 1 seconds 
 Insert_item inserted item 1 at position 1
[15][1][28][25][33] in=2 , out=2 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 1
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 26 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 26 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 28 at position 2
[15][1][empty][25][33] in=2 , out=3 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 28
Insert_item inserted item 28 at position 2
[empty][empty][28][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 28
Middleman thread 140162725947136 sleeping for 1 seconds 
 Insert_item inserted item 9 at position 2
[15][1][9][25][33] in=3 , out=3 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 9
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 28 at position 2
[empty][empty][empty][empty][empty] in=3 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 28 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 25 at position 3
[15][1][9][empty][33] in=3 , out=4 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 25
Insert_item inserted item 25 at position 3
[empty][empty][empty][25][empty] in=4 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 25
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 33 at position 4
[15][1][9][empty][empty] in=3 , out=0 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 33
Insert_item inserted item 33 at position 4
[empty][empty][empty][25][33] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 33
Middleman thread 140162725947136 sleeping for 2 seconds 
 Insert_item inserted item 33 at position 3
[15][1][9][33][empty] in=4 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 33
Producer thread 140162742732544 sleeping for 1 seconds 
 Insert_item inserted item 27 at position 4
[15][1][9][33][27] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 27
Producer thread 140162751125248 sleeping for 1 seconds 
 Remove_item removed item 25 at position 3
[empty][empty][empty][empty][33] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 25 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 33 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 33 
Consumer thread 140162717554432 sleeping for 1 seconds 
 Remove_item removed item 15 at position 0
[empty][1][9][33][27] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 15
Insert_item inserted item 15 at position 0
[15][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 15
Middleman thread 140162734339840 sleeping for 1 seconds 
 Insert_item inserted item 40 at position 0
[40][1][9][33][27] in=1 , out=1 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 40
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 1 at position 1
[40][empty][9][33][27] in=1 , out=2 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 1
Insert_item inserted item 1 at position 1
[15][1][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 1
Middleman thread 140162725947136 sleeping for 1 seconds 
 Insert_item inserted item 13 at position 1
[40][13][9][33][27] in=2 , out=2 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 13
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 15 at position 0
[empty][1][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 15 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 9 at position 2
[40][13][empty][33][27] in=2 , out=3 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 9
Insert_item inserted item 9 at position 2
[empty][1][9][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 9
Middleman thread 140162734339840 sleeping for 2 seconds 
 Remove_item removed item 33 at position 3
[40][13][empty][empty][27] in=2 , out=4 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 33
Insert_item inserted item 33 at position 3
[empty][1][9][33][empty] in=4 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 33
Middleman thread 140162725947136 sleeping for 3 seconds 
 Remove_item removed item 1 at position 1
[empty][empty][9][33][empty] in=4 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 1 
Consumer thread 140162709161728 sleeping for 1 seconds 
 Insert_item inserted item 48 at position 2
[40][13][48][empty][27] in=3 , out=4 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 48
Producer thread 140162751125248 sleeping for 3 seconds 
 Insert_item inserted item 18 at position 3
[40][13][48][18][27] in=4 , out=4 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 18
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 9 at position 2
[empty][empty][empty][33][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 9 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 27 at position 4
[40][13][48][18][empty] in=4 , out=0 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 27
Insert_item inserted item 27 at position 4
[empty][empty][empty][33][27] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 27
Middleman thread 140162734339840 sleeping for 3 seconds 
 Insert_item inserted item 2 at position 4
[40][13][48][18][2] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 2
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 33 at position 3
[empty][empty][empty][empty][27] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 33 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 40 at position 0
[empty][13][48][18][2] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 40
Insert_item inserted item 40 at position 0
[40][empty][empty][empty][27] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 40
Middleman thread 140162725947136 sleeping for 2 seconds 
 Remove_item removed item 27 at position 4
[40][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 27 
Consumer thread 140162709161728 sleeping for 1 seconds 
 Insert_item inserted item 40 at position 0
[40][13][48][18][2] in=1 , out=1 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 40
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 13 at position 1
[40][empty][48][18][2] in=1 , out=2 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 13
Insert_item inserted item 13 at position 1
[40][13][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 13
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 40 at position 0
[empty][13][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 40 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 48 at position 2
[40][empty][empty][18][2] in=1 , out=3 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 48
Insert_item inserted item 48 at position 2
[empty][13][48][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 48
Middleman thread 140162725947136 sleeping for 1 seconds 
 Insert_item inserted item 32 at position 1
[40][32][empty][18][2] in=2 , out=3 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 32
Producer thread 140162751125248 sleeping for 2 seconds 
 Remove_item removed item 13 at position 1
[empty][empty][48][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 13 
Consumer thread 140162717554432 sleeping for 1 seconds 
 Insert_item inserted item 22 at position 2
[40][32][22][18][2] in=3 , out=3 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 22
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 18 at position 3
[40][32][22][empty][2] in=3 , out=4 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 18
Insert_item inserted item 18 at position 3
[empty][empty][48][18][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 18
Middleman thread 140162725947136 sleeping for 3 seconds 
 Remove_item removed item 48 at position 2
[empty][empty][empty][18][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 48 
Consumer thread 140162709161728 sleeping for 1 seconds 
 Remove_item removed item 18 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 18 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Insert_item inserted item 18 at position 3
[40][32][22][18][2] in=4 , out=4 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 18
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 2 at position 4
[40][32][22][18][empty] in=4 , out=0 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 2
Insert_item inserted item 2 at position 4
[empty][empty][empty][empty][2] in=0 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 2
Middleman thread 140162734339840 sleeping for 3 seconds 
 Insert_item inserted item 4 at position 4
[40][32][22][18][4] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 4
Producer thread 140162751125248 sleeping for 1 seconds 
 Remove_item removed item 2 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 2 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 40 at position 0
[empty][32][22][18][4] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 40
Insert_item inserted item 40 at position 0
[40][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 40
Middleman thread 140162725947136 sleeping for 3 seconds 
 Remove_item removed item 40 at position 0
[empty][empty][empty][empty][empty] in=1 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 40 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Insert_item inserted item 7 at position 0
[7][32][22][18][4] in=1 , out=1 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 7
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 32 at position 1
[7][empty][22][18][4] in=1 , out=2 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 32
Insert_item inserted item 32 at position 1
[empty][32][empty][empty][empty] in=2 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 32
Middleman thread 140162734339840 sleeping for 1 seconds 
 Insert_item inserted item 34 at position 1
[7][34][22][18][4] in=2 , out=2 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 34
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 32 at position 1
[empty][empty][empty][empty][empty] in=2 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 32 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 22 at position 2
[7][34][empty][18][4] in=2 , out=3 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 22
Insert_item inserted item 22 at position 2
[empty][empty][22][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 22
Middleman thread 140162734339840 sleeping for 3 seconds 
 Insert_item inserted item 4 at position 2
[7][34][4][18][4] in=3 , out=3 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 4
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 18 at position 3
[7][34][4][empty][4] in=3 , out=4 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 18
Insert_item inserted item 18 at position 3
[empty][empty][22][18][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 18
Middleman thread 140162725947136 sleeping for 1 seconds 
 Remove_item removed item 22 at position 2
[empty][empty][empty][18][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 22 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Insert_item inserted item 16 at position 3
[7][34][4][16][4] in=4 , out=4 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 16
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 4 at position 4
[7][34][4][16][empty] in=4 , out=0 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 4
Insert_item inserted item 4 at position 4
[empty][empty][empty][18][4] in=0 , out=3 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 4
Middleman thread 140162725947136 sleeping for 1 seconds 
 Insert_item inserted item 47 at position 4
[7][34][4][16][47] in=0 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 47
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 18 at position 3
[empty][empty][empty][empty][4] in=0 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 18 
Consumer thread 140162709161728 sleeping for 3 seconds 
 Remove_item removed item 4 at position 4
[empty][empty][empty][empty][empty] in=0 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 4 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Remove_item removed item 7 at position 0
[empty][34][4][16][47] in=0 , out=1 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 7
Insert_item inserted item 7 at position 0
[7][empty][empty][empty][empty] in=1 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 7
Middleman thread 140162725947136 sleeping for 3 seconds 
 Remove_item removed item 34 at position 1
[empty][empty][4][16][47] in=0 , out=2 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 34
Insert_item inserted item 34 at position 1
[7][34][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 34
Middleman thread 140162734339840 sleeping for 1 seconds 
 Insert_item inserted item 22 at position 0
[22][empty][4][16][47] in=1 , out=2 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 22
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 4 at position 2
[22][empty][empty][16][47] in=1 , out=3 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 4
Insert_item inserted item 4 at position 2
[7][34][4][empty][empty] in=3 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 4
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 7 at position 0
[empty][34][4][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 7 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Insert_item inserted item 15 at position 1
[22][15][empty][16][47] in=2 , out=3 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 15
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 34 at position 1
[empty][empty][4][empty][empty] in=3 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 34 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 16 at position 3
[22][15][empty][empty][47] in=2 , out=4 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 16
Insert_item inserted item 16 at position 3
[empty][empty][4][16][empty] in=4 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 16
Middleman thread 140162725947136 sleeping for 3 seconds 
 Insert_item inserted item 44 at position 2
[22][15][44][empty][47] in=3 , out=4 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 44
Producer thread 140162742732544 sleeping for 2 seconds 
 Remove_item removed item 4 at position 2
[empty][empty][empty][16][empty] in=4 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 4 
Consumer thread 140162717554432 sleeping for 3 seconds 
 Remove_item removed item 16 at position 3
[empty][empty][empty][empty][empty] in=4 , out=4 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 16 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 47 at position 4
[22][15][44][empty][empty] in=3 , out=0 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 47
Insert_item inserted item 47 at position 4
[empty][empty][empty][empty][47] in=0 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 47
Middleman thread 140162734339840 sleeping for 1 seconds 
 Insert_item inserted item 15 at position 3
[22][15][44][15][empty] in=4 , out=0 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 15
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 22 at position 0
[empty][15][44][15][empty] in=4 , out=1 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 22
Insert_item inserted item 22 at position 0
[22][empty][empty][empty][47] in=1 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 22
Middleman thread 140162734339840 sleeping for 3 seconds 
 Remove_item removed item 15 at position 1
[empty][empty][44][15][empty] in=4 , out=2 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 15
Insert_item inserted item 15 at position 1
[22][15][empty][empty][47] in=2 , out=4 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 15
Middleman thread 140162725947136 sleeping for 1 seconds 
 Insert_item inserted item 42 at position 4
[empty][empty][44][15][42] in=0 , out=2 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 42
Producer thread 140162742732544 sleeping for 3 seconds 
 Remove_item removed item 47 at position 4
[22][15][empty][empty][empty] in=2 , out=0 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 47 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 44 at position 2
[empty][empty][empty][15][42] in=0 , out=3 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 44
Insert_item inserted item 44 at position 2
[22][15][44][empty][empty] in=3 , out=0 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 44
Middleman thread 140162725947136 sleeping for 1 seconds 
 Remove_item removed item 22 at position 0
[empty][15][44][empty][empty] in=3 , out=1 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 22 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Remove_item removed item 15 at position 3
[empty][empty][empty][empty][42] in=0 , out=4 ,queue=Producer/Middleman
Middleman thread 140162725947136 removed value 15
Insert_item inserted item 15 at position 3
[empty][15][44][15][empty] in=4 , out=1 ,queue=Middleman/Consumer
Middleman thread 140162725947136 inserted value 15
Middleman thread 140162725947136 sleeping for 2 seconds 
 Insert_item inserted item 2 at position 0
[2][empty][empty][empty][42] in=1 , out=4 ,queue=Producer/Middleman
Producer thread 140162751125248 inserted value 2
Producer thread 140162751125248 sleeping for 3 seconds 
 Remove_item removed item 15 at position 1
[empty][empty][44][15][empty] in=4 , out=2 ,queue=Middleman/Consumer
Consumer thread 140162709161728 removed value 15 
Consumer thread 140162709161728 sleeping for 2 seconds 
 Remove_item removed item 42 at position 4
[2][empty][empty][empty][empty] in=1 , out=0 ,queue=Producer/Middleman
Middleman thread 140162734339840 removed value 42
Insert_item inserted item 42 at position 4
[empty][empty][44][15][42] in=0 , out=2 ,queue=Middleman/Consumer
Middleman thread 140162734339840 inserted value 42
Middleman thread 140162734339840 sleeping for 3 seconds 
 Insert_item inserted item 8 at position 1
[2][8][empty][empty][empty] in=2 , out=0 ,queue=Producer/Middleman
Producer thread 140162742732544 inserted value 8
Producer thread 140162742732544 sleeping for 1 seconds 
 Remove_item removed item 44 at position 2
[empty][empty][empty][15][42] in=0 , out=3 ,queue=Middleman/Consumer
Consumer thread 140162717554432 removed value 44 
Consumer thread 140162717554432 sleeping for 2 seconds 
 Main thread exiting
mohan@mohan-VirtualBox:~$ exit
exit

Script done on 2022-05-04 17:26:39-04:00 [COMMAND_EXIT_CODE="0"]
