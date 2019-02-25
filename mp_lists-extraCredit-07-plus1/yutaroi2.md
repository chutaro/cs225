


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
==27289== Memcheck, a memory error detector
==27289== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27289== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27289== Command: ./test -r xml "List::insertFront\ size"
==27289== 
==27289== 
==27289== HEAP SUMMARY:
==27289==     in use at exit: 0 bytes in 0 blocks
==27289==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==27289== 
==27289== All heap blocks were freed -- no leaks are possible
==27289== 
==27289== For counts of detected and suppressed errors, rerun with: -v
==27289== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27294== Memcheck, a memory error detector
==27294== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27294== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27294== Command: ./test -r xml "List::insertBack\ size"
==27294== 
==27294== 
==27294== HEAP SUMMARY:
==27294==     in use at exit: 0 bytes in 0 blocks
==27294==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==27294== 
==27294== All heap blocks were freed -- no leaks are possible
==27294== 
==27294== For counts of detected and suppressed errors, rerun with: -v
==27294== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27316== Memcheck, a memory error detector
==27316== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27316== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27316== Command: ./test -r xml "List::insert\ contents"
==27316== 
==27316== 
==27316== HEAP SUMMARY:
==27316==     in use at exit: 0 bytes in 0 blocks
==27316==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==27316== 
==27316== All heap blocks were freed -- no leaks are possible
==27316== 
==27316== For counts of detected and suppressed errors, rerun with: -v
==27316== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27376== Memcheck, a memory error detector
==27376== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27376== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27376== Command: ./test -r xml "List::split\ simple"
==27376== 
==27376== 
==27376== HEAP SUMMARY:
==27376==     in use at exit: 0 bytes in 0 blocks
==27376==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==27376== 
==27376== All heap blocks were freed -- no leaks are possible
==27376== 
==27376== For counts of detected and suppressed errors, rerun with: -v
==27376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27386== Memcheck, a memory error detector
==27386== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27386== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27386== Command: ./test -r xml "List::_destroy\ empty\ list"
==27386== 
==27386== 
==27386== HEAP SUMMARY:
==27386==     in use at exit: 0 bytes in 0 blocks
==27386==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==27386== 
==27386== All heap blocks were freed -- no leaks are possible
==27386== 
==27386== For counts of detected and suppressed errors, rerun with: -v
==27386== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27402== Memcheck, a memory error detector
==27402== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27402== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27402== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==27402== 
==27402== 
==27402== HEAP SUMMARY:
==27402==     in use at exit: 0 bytes in 0 blocks
==27402==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==27402== 
==27402== All heap blocks were freed -- no leaks are possible
==27402== 
==27402== For counts of detected and suppressed errors, rerun with: -v
==27402== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27404== Memcheck, a memory error detector
==27404== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27404== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27404== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==27404== 
==27404== 
==27404== HEAP SUMMARY:
==27404==     in use at exit: 0 bytes in 0 blocks
==27404==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==27404== 
==27404== All heap blocks were freed -- no leaks are possible
==27404== 
==27404== For counts of detected and suppressed errors, rerun with: -v
==27404== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27457== Memcheck, a memory error detector
==27457== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27457== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27457== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==27457== 
==27457== 
==27457== HEAP SUMMARY:
==27457==     in use at exit: 0 bytes in 0 blocks
==27457==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==27457== 
==27457== All heap blocks were freed -- no leaks are possible
==27457== 
==27457== For counts of detected and suppressed errors, rerun with: -v
==27457== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27460== Memcheck, a memory error detector
==27460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27460== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27460== 
==27460== 
==27460== HEAP SUMMARY:
==27460==     in use at exit: 0 bytes in 0 blocks
==27460==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==27460== 
==27460== All heap blocks were freed -- no leaks are possible
==27460== 
==27460== For counts of detected and suppressed errors, rerun with: -v
==27460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27463== Memcheck, a memory error detector
==27463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27463== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27463== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==27463== 
==27463== 
==27463== HEAP SUMMARY:
==27463==     in use at exit: 0 bytes in 0 blocks
==27463==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==27463== 
==27463== All heap blocks were freed -- no leaks are possible
==27463== 
==27463== For counts of detected and suppressed errors, rerun with: -v
==27463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27484== Memcheck, a memory error detector
==27484== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27484== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27484== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27484== 
==27484== 
==27484== HEAP SUMMARY:
==27484==     in use at exit: 0 bytes in 0 blocks
==27484==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==27484== 
==27484== All heap blocks were freed -- no leaks are possible
==27484== 
==27484== For counts of detected and suppressed errors, rerun with: -v
==27484== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27489== Memcheck, a memory error detector
==27489== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27489== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27489== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==27489== 
==27489== 
==27489== HEAP SUMMARY:
==27489==     in use at exit: 0 bytes in 0 blocks
==27489==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==27489== 
==27489== All heap blocks were freed -- no leaks are possible
==27489== 
==27489== For counts of detected and suppressed errors, rerun with: -v
==27489== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27493== Memcheck, a memory error detector
==27493== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27493== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27493== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==27493== 
==27493== 
==27493== HEAP SUMMARY:
==27493==     in use at exit: 0 bytes in 0 blocks
==27493==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==27493== 
==27493== All heap blocks were freed -- no leaks are possible
==27493== 
==27493== For counts of detected and suppressed errors, rerun with: -v
==27493== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27551== Memcheck, a memory error detector
==27551== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27551== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27551== Command: ./test -r xml "List::insert\ contents\ #2"
==27551== 
==27551== 
==27551== HEAP SUMMARY:
==27551==     in use at exit: 0 bytes in 0 blocks
==27551==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==27551== 
==27551== All heap blocks were freed -- no leaks are possible
==27551== 
==27551== For counts of detected and suppressed errors, rerun with: -v
==27551== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27557== Memcheck, a memory error detector
==27557== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27557== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27557== Command: ./test -r xml "List::waterfall\ simple"
==27557== 
==27557== 
==27557== HEAP SUMMARY:
==27557==     in use at exit: 0 bytes in 0 blocks
==27557==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==27557== 
==27557== All heap blocks were freed -- no leaks are possible
==27557== 
==27557== For counts of detected and suppressed errors, rerun with: -v
==27557== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **f554a9a6f0bcedf3732ed014f4c9d7bb107d79d6** (from **February 25th 2019, 12:05:00 am**)
