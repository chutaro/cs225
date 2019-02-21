


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
==1880== Memcheck, a memory error detector
==1880== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1880== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1880== Command: ./test -r xml "List::insertFront\ size"
==1880== 
==1880== 
==1880== HEAP SUMMARY:
==1880==     in use at exit: 0 bytes in 0 blocks
==1880==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==1880== 
==1880== All heap blocks were freed -- no leaks are possible
==1880== 
==1880== For counts of detected and suppressed errors, rerun with: -v
==1880== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1885== Memcheck, a memory error detector
==1885== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1885== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1885== Command: ./test -r xml "List::insertBack\ size"
==1885== 
==1885== 
==1885== HEAP SUMMARY:
==1885==     in use at exit: 0 bytes in 0 blocks
==1885==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==1885== 
==1885== All heap blocks were freed -- no leaks are possible
==1885== 
==1885== For counts of detected and suppressed errors, rerun with: -v
==1885== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1889== Memcheck, a memory error detector
==1889== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1889== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1889== Command: ./test -r xml "List::insert\ contents"
==1889== 
==1889== 
==1889== HEAP SUMMARY:
==1889==     in use at exit: 0 bytes in 0 blocks
==1889==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==1889== 
==1889== All heap blocks were freed -- no leaks are possible
==1889== 
==1889== For counts of detected and suppressed errors, rerun with: -v
==1889== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1896== Memcheck, a memory error detector
==1896== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1896== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1896== Command: ./test -r xml "List::split\ simple"
==1896== 
==1896== 
==1896== HEAP SUMMARY:
==1896==     in use at exit: 0 bytes in 0 blocks
==1896==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==1896== 
==1896== All heap blocks were freed -- no leaks are possible
==1896== 
==1896== For counts of detected and suppressed errors, rerun with: -v
==1896== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1903== Memcheck, a memory error detector
==1903== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1903== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1903== Command: ./test -r xml "List::_destroy\ empty\ list"
==1903== 
==1903== 
==1903== HEAP SUMMARY:
==1903==     in use at exit: 0 bytes in 0 blocks
==1903==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==1903== 
==1903== All heap blocks were freed -- no leaks are possible
==1903== 
==1903== For counts of detected and suppressed errors, rerun with: -v
==1903== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1909== Memcheck, a memory error detector
==1909== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1909== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1909== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==1909== 
==1909== 
==1909== HEAP SUMMARY:
==1909==     in use at exit: 0 bytes in 0 blocks
==1909==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==1909== 
==1909== All heap blocks were freed -- no leaks are possible
==1909== 
==1909== For counts of detected and suppressed errors, rerun with: -v
==1909== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1914== Memcheck, a memory error detector
==1914== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1914== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1914== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==1914== 
==1914== 
==1914== HEAP SUMMARY:
==1914==     in use at exit: 0 bytes in 0 blocks
==1914==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==1914== 
==1914== All heap blocks were freed -- no leaks are possible
==1914== 
==1914== For counts of detected and suppressed errors, rerun with: -v
==1914== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1922== Memcheck, a memory error detector
==1922== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1922== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1922== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==1922== 
==1922== 
==1922== HEAP SUMMARY:
==1922==     in use at exit: 0 bytes in 0 blocks
==1922==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==1922== 
==1922== All heap blocks were freed -- no leaks are possible
==1922== 
==1922== For counts of detected and suppressed errors, rerun with: -v
==1922== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1926== Memcheck, a memory error detector
==1926== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1926== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1926== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1926== 
==1926== 
==1926== HEAP SUMMARY:
==1926==     in use at exit: 0 bytes in 0 blocks
==1926==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==1926== 
==1926== All heap blocks were freed -- no leaks are possible
==1926== 
==1926== For counts of detected and suppressed errors, rerun with: -v
==1926== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1933== Memcheck, a memory error detector
==1933== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1933== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1933== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==1933== 
==1933== 
==1933== HEAP SUMMARY:
==1933==     in use at exit: 0 bytes in 0 blocks
==1933==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==1933== 
==1933== All heap blocks were freed -- no leaks are possible
==1933== 
==1933== For counts of detected and suppressed errors, rerun with: -v
==1933== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1939== Memcheck, a memory error detector
==1939== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1939== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1939== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1939== 
==1939== 
==1939== HEAP SUMMARY:
==1939==     in use at exit: 0 bytes in 0 blocks
==1939==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==1939== 
==1939== All heap blocks were freed -- no leaks are possible
==1939== 
==1939== For counts of detected and suppressed errors, rerun with: -v
==1939== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1943== Memcheck, a memory error detector
==1943== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1943== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1943== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1943== 
==1943== 
==1943== HEAP SUMMARY:
==1943==     in use at exit: 0 bytes in 0 blocks
==1943==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==1943== 
==1943== All heap blocks were freed -- no leaks are possible
==1943== 
==1943== For counts of detected and suppressed errors, rerun with: -v
==1943== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1947== Memcheck, a memory error detector
==1947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1947== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1947== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1947== 
==1947== 
==1947== HEAP SUMMARY:
==1947==     in use at exit: 0 bytes in 0 blocks
==1947==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==1947== 
==1947== All heap blocks were freed -- no leaks are possible
==1947== 
==1947== For counts of detected and suppressed errors, rerun with: -v
==1947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1951== Memcheck, a memory error detector
==1951== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1951== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1951== Command: ./test -r xml "List::insert\ contents\ #2"
==1951== 
==1951== 
==1951== HEAP SUMMARY:
==1951==     in use at exit: 0 bytes in 0 blocks
==1951==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==1951== 
==1951== All heap blocks were freed -- no leaks are possible
==1951== 
==1951== For counts of detected and suppressed errors, rerun with: -v
==1951== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1956== Memcheck, a memory error detector
==1956== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1956== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1956== Command: ./test -r xml "List::waterfall\ simple"
==1956== 
==1956== 
==1956== HEAP SUMMARY:
==1956==     in use at exit: 0 bytes in 0 blocks
==1956==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==1956== 
==1956== All heap blocks were freed -- no leaks are possible
==1956== 
==1956== For counts of detected and suppressed errors, rerun with: -v
==1956== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 21st 2019, 12:05:00 am**)
