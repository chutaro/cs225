


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==30885== Memcheck, a memory error detector
==30885== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30885== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30885== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==30885== 
==30885== 
==30885== HEAP SUMMARY:
==30885==     in use at exit: 0 bytes in 0 blocks
==30885==   total heap usage: 2,492 allocs, 2,492 frees, 278,680 bytes allocated
==30885== 
==30885== All heap blocks were freed -- no leaks are possible
==30885== 
==30885== For counts of detected and suppressed errors, rerun with: -v
==30885== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==30887== Memcheck, a memory error detector
==30887== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30887== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30887== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==30887== 
==30887== 
==30887== HEAP SUMMARY:
==30887==     in use at exit: 0 bytes in 0 blocks
==30887==   total heap usage: 2,492 allocs, 2,492 frees, 276,488 bytes allocated
==30887== 
==30887== All heap blocks were freed -- no leaks are possible
==30887== 
==30887== For counts of detected and suppressed errors, rerun with: -v
==30887== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==30889== Memcheck, a memory error detector
==30889== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30889== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30889== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==30889== 
==30889== 
==30889== HEAP SUMMARY:
==30889==     in use at exit: 0 bytes in 0 blocks
==30889==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==30889== 
==30889== All heap blocks were freed -- no leaks are possible
==30889== 
==30889== For counts of detected and suppressed errors, rerun with: -v
==30889== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **yutaroi2** using **fe454c79ae033f7cbbe36e8f4e245dc54a7cbbc8** (from **February 4th 2019, 12:15:00 am**)
