


## Score: 52/57 (91.23%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==28719== Memcheck, a memory error detector
==28719== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28719== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28719== Command: ./test -r xml "List::insertFront\ size"
==28719== 
==28719== 
==28719== HEAP SUMMARY:
==28719==     in use at exit: 0 bytes in 0 blocks
==28719==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==28719== 
==28719== All heap blocks were freed -- no leaks are possible
==28719== 
==28719== For counts of detected and suppressed errors, rerun with: -v
==28719== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==28722== Memcheck, a memory error detector
==28722== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28722== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28722== Command: ./test -r xml "List::insertBack\ size"
==28722== 
==28722== 
==28722== HEAP SUMMARY:
==28722==     in use at exit: 0 bytes in 0 blocks
==28722==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==28722== 
==28722== All heap blocks were freed -- no leaks are possible
==28722== 
==28722== For counts of detected and suppressed errors, rerun with: -v
==28722== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==28726== Memcheck, a memory error detector
==28726== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28726== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28726== Command: ./test -r xml "List::insert\ contents"
==28726== 
==28726== 
==28726== HEAP SUMMARY:
==28726==     in use at exit: 0 bytes in 0 blocks
==28726==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==28726== 
==28726== All heap blocks were freed -- no leaks are possible
==28726== 
==28726== For counts of detected and suppressed errors, rerun with: -v
==28726== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==28730== Memcheck, a memory error detector
==28730== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28730== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28730== Command: ./test -r xml "List::split\ simple"
==28730== 
==28730== 
==28730== HEAP SUMMARY:
==28730==     in use at exit: 0 bytes in 0 blocks
==28730==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==28730== 
==28730== All heap blocks were freed -- no leaks are possible
==28730== 
==28730== For counts of detected and suppressed errors, rerun with: -v
==28730== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==28737== Memcheck, a memory error detector
==28737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28737== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28737== Command: ./test -r xml "List::_destroy\ empty\ list"
==28737== 
==28737== 
==28737== HEAP SUMMARY:
==28737==     in use at exit: 0 bytes in 0 blocks
==28737==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==28737== 
==28737== All heap blocks were freed -- no leaks are possible
==28737== 
==28737== For counts of detected and suppressed errors, rerun with: -v
==28737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==28739== Memcheck, a memory error detector
==28739== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28739== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28739== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==28739== 
==28739== 
==28739== HEAP SUMMARY:
==28739==     in use at exit: 0 bytes in 0 blocks
==28739==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==28739== 
==28739== All heap blocks were freed -- no leaks are possible
==28739== 
==28739== For counts of detected and suppressed errors, rerun with: -v
==28739== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==28741== Memcheck, a memory error detector
==28741== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28741== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28741== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==28741== 
==28741== 
==28741== HEAP SUMMARY:
==28741==     in use at exit: 0 bytes in 0 blocks
==28741==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==28741== 
==28741== All heap blocks were freed -- no leaks are possible
==28741== 
==28741== For counts of detected and suppressed errors, rerun with: -v
==28741== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==28743== Memcheck, a memory error detector
==28743== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28743== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28743== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==28743== 
==28743== 
==28743== HEAP SUMMARY:
==28743==     in use at exit: 0 bytes in 0 blocks
==28743==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==28743== 
==28743== All heap blocks were freed -- no leaks are possible
==28743== 
==28743== For counts of detected and suppressed errors, rerun with: -v
==28743== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==28746== Memcheck, a memory error detector
==28746== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28746== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28746== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28746== 
==28746== 
==28746== HEAP SUMMARY:
==28746==     in use at exit: 0 bytes in 0 blocks
==28746==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==28746== 
==28746== All heap blocks were freed -- no leaks are possible
==28746== 
==28746== For counts of detected and suppressed errors, rerun with: -v
==28746== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==28748== Memcheck, a memory error detector
==28748== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28748== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28748== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==28748== 
==28748== 
==28748== HEAP SUMMARY:
==28748==     in use at exit: 0 bytes in 0 blocks
==28748==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==28748== 
==28748== All heap blocks were freed -- no leaks are possible
==28748== 
==28748== For counts of detected and suppressed errors, rerun with: -v
==28748== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==28750== Memcheck, a memory error detector
==28750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28750== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28750== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28750== 
==28750== 
==28750== HEAP SUMMARY:
==28750==     in use at exit: 0 bytes in 0 blocks
==28750==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==28750== 
==28750== All heap blocks were freed -- no leaks are possible
==28750== 
==28750== For counts of detected and suppressed errors, rerun with: -v
==28750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==28752== Memcheck, a memory error detector
==28752== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28752== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28752== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==28752== 
==28752== 
==28752== HEAP SUMMARY:
==28752==     in use at exit: 0 bytes in 0 blocks
==28752==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==28752== 
==28752== All heap blocks were freed -- no leaks are possible
==28752== 
==28752== For counts of detected and suppressed errors, rerun with: -v
==28752== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==28754== Memcheck, a memory error detector
==28754== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28754== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28754== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==28754== 
==28754== 
==28754== HEAP SUMMARY:
==28754==     in use at exit: 0 bytes in 0 blocks
==28754==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==28754== 
==28754== All heap blocks were freed -- no leaks are possible
==28754== 
==28754== For counts of detected and suppressed errors, rerun with: -v
==28754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==28762== Memcheck, a memory error detector
==28762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28762== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28762== Command: ./test -r xml "List::insert\ contents\ #2"
==28762== 
==28762== 
==28762== HEAP SUMMARY:
==28762==     in use at exit: 0 bytes in 0 blocks
==28762==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==28762== 
==28762== All heap blocks were freed -- no leaks are possible
==28762== 
==28762== For counts of detected and suppressed errors, rerun with: -v
==28762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==28765== Memcheck, a memory error detector
==28765== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28765== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28765== Command: ./test -r xml "List::waterfall\ simple"
==28765== 
==28765== 
==28765== HEAP SUMMARY:
==28765==     in use at exit: 0 bytes in 0 blocks
==28765==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==28765== 
==28765== All heap blocks were freed -- no leaks are possible
==28765== 
==28765== For counts of detected and suppressed errors, rerun with: -v
==28765== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 20th 2019, 12:05:00 am**)
