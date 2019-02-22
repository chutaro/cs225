


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
==25870== Memcheck, a memory error detector
==25870== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25870== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25870== Command: ./test -r xml "List::insertFront\ size"
==25870== 
==25870== 
==25870== HEAP SUMMARY:
==25870==     in use at exit: 0 bytes in 0 blocks
==25870==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==25870== 
==25870== All heap blocks were freed -- no leaks are possible
==25870== 
==25870== For counts of detected and suppressed errors, rerun with: -v
==25870== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25880== Memcheck, a memory error detector
==25880== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25880== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25880== Command: ./test -r xml "List::insertBack\ size"
==25880== 
==25880== 
==25880== HEAP SUMMARY:
==25880==     in use at exit: 0 bytes in 0 blocks
==25880==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==25880== 
==25880== All heap blocks were freed -- no leaks are possible
==25880== 
==25880== For counts of detected and suppressed errors, rerun with: -v
==25880== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25889== Memcheck, a memory error detector
==25889== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25889== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25889== Command: ./test -r xml "List::insert\ contents"
==25889== 
==25889== 
==25889== HEAP SUMMARY:
==25889==     in use at exit: 0 bytes in 0 blocks
==25889==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==25889== 
==25889== All heap blocks were freed -- no leaks are possible
==25889== 
==25889== For counts of detected and suppressed errors, rerun with: -v
==25889== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25902== Memcheck, a memory error detector
==25902== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25902== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25902== Command: ./test -r xml "List::split\ simple"
==25902== 
==25902== 
==25902== HEAP SUMMARY:
==25902==     in use at exit: 0 bytes in 0 blocks
==25902==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==25902== 
==25902== All heap blocks were freed -- no leaks are possible
==25902== 
==25902== For counts of detected and suppressed errors, rerun with: -v
==25902== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25910== Memcheck, a memory error detector
==25910== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25910== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25910== Command: ./test -r xml "List::_destroy\ empty\ list"
==25910== 
==25910== 
==25910== HEAP SUMMARY:
==25910==     in use at exit: 0 bytes in 0 blocks
==25910==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==25910== 
==25910== All heap blocks were freed -- no leaks are possible
==25910== 
==25910== For counts of detected and suppressed errors, rerun with: -v
==25910== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25921== Memcheck, a memory error detector
==25921== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25921== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25921== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==25921== 
==25921== 
==25921== HEAP SUMMARY:
==25921==     in use at exit: 0 bytes in 0 blocks
==25921==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==25921== 
==25921== All heap blocks were freed -- no leaks are possible
==25921== 
==25921== For counts of detected and suppressed errors, rerun with: -v
==25921== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25932== Memcheck, a memory error detector
==25932== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25932== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25932== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==25932== 
==25932== 
==25932== HEAP SUMMARY:
==25932==     in use at exit: 0 bytes in 0 blocks
==25932==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==25932== 
==25932== All heap blocks were freed -- no leaks are possible
==25932== 
==25932== For counts of detected and suppressed errors, rerun with: -v
==25932== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25935== Memcheck, a memory error detector
==25935== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25935== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25935== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==25935== 
==25935== 
==25935== HEAP SUMMARY:
==25935==     in use at exit: 0 bytes in 0 blocks
==25935==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==25935== 
==25935== All heap blocks were freed -- no leaks are possible
==25935== 
==25935== For counts of detected and suppressed errors, rerun with: -v
==25935== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25939== Memcheck, a memory error detector
==25939== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25939== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25939== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25939== 
==25939== 
==25939== HEAP SUMMARY:
==25939==     in use at exit: 0 bytes in 0 blocks
==25939==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==25939== 
==25939== All heap blocks were freed -- no leaks are possible
==25939== 
==25939== For counts of detected and suppressed errors, rerun with: -v
==25939== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25961== Memcheck, a memory error detector
==25961== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25961== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25961== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==25961== 
==25961== 
==25961== HEAP SUMMARY:
==25961==     in use at exit: 0 bytes in 0 blocks
==25961==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==25961== 
==25961== All heap blocks were freed -- no leaks are possible
==25961== 
==25961== For counts of detected and suppressed errors, rerun with: -v
==25961== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25966== Memcheck, a memory error detector
==25966== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25966== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25966== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25966== 
==25966== 
==25966== HEAP SUMMARY:
==25966==     in use at exit: 0 bytes in 0 blocks
==25966==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==25966== 
==25966== All heap blocks were freed -- no leaks are possible
==25966== 
==25966== For counts of detected and suppressed errors, rerun with: -v
==25966== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25977== Memcheck, a memory error detector
==25977== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25977== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25977== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==25977== 
==25977== 
==25977== HEAP SUMMARY:
==25977==     in use at exit: 0 bytes in 0 blocks
==25977==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==25977== 
==25977== All heap blocks were freed -- no leaks are possible
==25977== 
==25977== For counts of detected and suppressed errors, rerun with: -v
==25977== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25981== Memcheck, a memory error detector
==25981== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25981== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25981== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==25981== 
==25981== 
==25981== HEAP SUMMARY:
==25981==     in use at exit: 0 bytes in 0 blocks
==25981==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==25981== 
==25981== All heap blocks were freed -- no leaks are possible
==25981== 
==25981== For counts of detected and suppressed errors, rerun with: -v
==25981== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25986== Memcheck, a memory error detector
==25986== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25986== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25986== Command: ./test -r xml "List::insert\ contents\ #2"
==25986== 
==25986== 
==25986== HEAP SUMMARY:
==25986==     in use at exit: 0 bytes in 0 blocks
==25986==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==25986== 
==25986== All heap blocks were freed -- no leaks are possible
==25986== 
==25986== For counts of detected and suppressed errors, rerun with: -v
==25986== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25991== Memcheck, a memory error detector
==25991== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25991== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25991== Command: ./test -r xml "List::waterfall\ simple"
==25991== 
==25991== 
==25991== HEAP SUMMARY:
==25991==     in use at exit: 0 bytes in 0 blocks
==25991==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==25991== 
==25991== All heap blocks were freed -- no leaks are possible
==25991== 
==25991== For counts of detected and suppressed errors, rerun with: -v
==25991== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 22nd 2019, 12:05:00 am**)
