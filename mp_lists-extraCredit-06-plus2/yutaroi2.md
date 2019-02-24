


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
==19867== Memcheck, a memory error detector
==19867== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19867== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19867== Command: ./test -r xml "List::insertFront\ size"
==19867== 
==19867== 
==19867== HEAP SUMMARY:
==19867==     in use at exit: 0 bytes in 0 blocks
==19867==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==19867== 
==19867== All heap blocks were freed -- no leaks are possible
==19867== 
==19867== For counts of detected and suppressed errors, rerun with: -v
==19867== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19871== Memcheck, a memory error detector
==19871== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19871== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19871== Command: ./test -r xml "List::insertBack\ size"
==19871== 
==19871== 
==19871== HEAP SUMMARY:
==19871==     in use at exit: 0 bytes in 0 blocks
==19871==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==19871== 
==19871== All heap blocks were freed -- no leaks are possible
==19871== 
==19871== For counts of detected and suppressed errors, rerun with: -v
==19871== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19877== Memcheck, a memory error detector
==19877== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19877== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19877== Command: ./test -r xml "List::insert\ contents"
==19877== 
==19877== 
==19877== HEAP SUMMARY:
==19877==     in use at exit: 0 bytes in 0 blocks
==19877==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==19877== 
==19877== All heap blocks were freed -- no leaks are possible
==19877== 
==19877== For counts of detected and suppressed errors, rerun with: -v
==19877== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19884== Memcheck, a memory error detector
==19884== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19884== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19884== Command: ./test -r xml "List::split\ simple"
==19884== 
==19884== 
==19884== HEAP SUMMARY:
==19884==     in use at exit: 0 bytes in 0 blocks
==19884==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==19884== 
==19884== All heap blocks were freed -- no leaks are possible
==19884== 
==19884== For counts of detected and suppressed errors, rerun with: -v
==19884== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19973== Memcheck, a memory error detector
==19973== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19973== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19973== Command: ./test -r xml "List::_destroy\ empty\ list"
==19973== 
==19973== 
==19973== HEAP SUMMARY:
==19973==     in use at exit: 0 bytes in 0 blocks
==19973==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==19973== 
==19973== All heap blocks were freed -- no leaks are possible
==19973== 
==19973== For counts of detected and suppressed errors, rerun with: -v
==19973== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19984== Memcheck, a memory error detector
==19984== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19984== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19984== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==19984== 
==19984== 
==19984== HEAP SUMMARY:
==19984==     in use at exit: 0 bytes in 0 blocks
==19984==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==19984== 
==19984== All heap blocks were freed -- no leaks are possible
==19984== 
==19984== For counts of detected and suppressed errors, rerun with: -v
==19984== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19995== Memcheck, a memory error detector
==19995== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19995== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19995== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==19995== 
==19995== 
==19995== HEAP SUMMARY:
==19995==     in use at exit: 0 bytes in 0 blocks
==19995==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==19995== 
==19995== All heap blocks were freed -- no leaks are possible
==19995== 
==19995== For counts of detected and suppressed errors, rerun with: -v
==19995== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20001== Memcheck, a memory error detector
==20001== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20001== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20001== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==20001== 
==20001== 
==20001== HEAP SUMMARY:
==20001==     in use at exit: 0 bytes in 0 blocks
==20001==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==20001== 
==20001== All heap blocks were freed -- no leaks are possible
==20001== 
==20001== For counts of detected and suppressed errors, rerun with: -v
==20001== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20009== Memcheck, a memory error detector
==20009== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20009== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20009== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20009== 
==20009== 
==20009== HEAP SUMMARY:
==20009==     in use at exit: 0 bytes in 0 blocks
==20009==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20009== 
==20009== All heap blocks were freed -- no leaks are possible
==20009== 
==20009== For counts of detected and suppressed errors, rerun with: -v
==20009== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20017== Memcheck, a memory error detector
==20017== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20017== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20017== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==20017== 
==20017== 
==20017== HEAP SUMMARY:
==20017==     in use at exit: 0 bytes in 0 blocks
==20017==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==20017== 
==20017== All heap blocks were freed -- no leaks are possible
==20017== 
==20017== For counts of detected and suppressed errors, rerun with: -v
==20017== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20021== Memcheck, a memory error detector
==20021== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20021== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20021== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20021== 
==20021== 
==20021== HEAP SUMMARY:
==20021==     in use at exit: 0 bytes in 0 blocks
==20021==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20021== 
==20021== All heap blocks were freed -- no leaks are possible
==20021== 
==20021== For counts of detected and suppressed errors, rerun with: -v
==20021== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20029== Memcheck, a memory error detector
==20029== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20029== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20029== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==20029== 
==20029== 
==20029== HEAP SUMMARY:
==20029==     in use at exit: 0 bytes in 0 blocks
==20029==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==20029== 
==20029== All heap blocks were freed -- no leaks are possible
==20029== 
==20029== For counts of detected and suppressed errors, rerun with: -v
==20029== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20040== Memcheck, a memory error detector
==20040== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20040== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20040== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==20040== 
==20040== 
==20040== HEAP SUMMARY:
==20040==     in use at exit: 0 bytes in 0 blocks
==20040==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==20040== 
==20040== All heap blocks were freed -- no leaks are possible
==20040== 
==20040== For counts of detected and suppressed errors, rerun with: -v
==20040== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20058== Memcheck, a memory error detector
==20058== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20058== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20058== Command: ./test -r xml "List::insert\ contents\ #2"
==20058== 
==20058== 
==20058== HEAP SUMMARY:
==20058==     in use at exit: 0 bytes in 0 blocks
==20058==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==20058== 
==20058== All heap blocks were freed -- no leaks are possible
==20058== 
==20058== For counts of detected and suppressed errors, rerun with: -v
==20058== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20065== Memcheck, a memory error detector
==20065== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20065== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20065== Command: ./test -r xml "List::waterfall\ simple"
==20065== 
==20065== 
==20065== HEAP SUMMARY:
==20065==     in use at exit: 0 bytes in 0 blocks
==20065==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==20065== 
==20065== All heap blocks were freed -- no leaks are possible
==20065== 
==20065== For counts of detected and suppressed errors, rerun with: -v
==20065== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **f554a9a6f0bcedf3732ed014f4c9d7bb107d79d6** (from **February 24th 2019, 12:05:00 am**)
