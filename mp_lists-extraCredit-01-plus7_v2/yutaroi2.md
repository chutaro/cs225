


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
==7492== Memcheck, a memory error detector
==7492== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7492== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7492== Command: ./test -r xml "List::insertFront\ size"
==7492== 
==7492== 
==7492== HEAP SUMMARY:
==7492==     in use at exit: 0 bytes in 0 blocks
==7492==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==7492== 
==7492== All heap blocks were freed -- no leaks are possible
==7492== 
==7492== For counts of detected and suppressed errors, rerun with: -v
==7492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7495== Memcheck, a memory error detector
==7495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7495== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7495== Command: ./test -r xml "List::insertBack\ size"
==7495== 
==7495== 
==7495== HEAP SUMMARY:
==7495==     in use at exit: 0 bytes in 0 blocks
==7495==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==7495== 
==7495== All heap blocks were freed -- no leaks are possible
==7495== 
==7495== For counts of detected and suppressed errors, rerun with: -v
==7495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7503== Memcheck, a memory error detector
==7503== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7503== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7503== Command: ./test -r xml "List::insert\ contents"
==7503== 
==7503== 
==7503== HEAP SUMMARY:
==7503==     in use at exit: 0 bytes in 0 blocks
==7503==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==7503== 
==7503== All heap blocks were freed -- no leaks are possible
==7503== 
==7503== For counts of detected and suppressed errors, rerun with: -v
==7503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7509== Memcheck, a memory error detector
==7509== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7509== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7509== Command: ./test -r xml "List::split\ simple"
==7509== 
==7509== 
==7509== HEAP SUMMARY:
==7509==     in use at exit: 0 bytes in 0 blocks
==7509==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==7509== 
==7509== All heap blocks were freed -- no leaks are possible
==7509== 
==7509== For counts of detected and suppressed errors, rerun with: -v
==7509== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7516== Memcheck, a memory error detector
==7516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7516== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7516== Command: ./test -r xml "List::_destroy\ empty\ list"
==7516== 
==7516== 
==7516== HEAP SUMMARY:
==7516==     in use at exit: 0 bytes in 0 blocks
==7516==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==7516== 
==7516== All heap blocks were freed -- no leaks are possible
==7516== 
==7516== For counts of detected and suppressed errors, rerun with: -v
==7516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7520== Memcheck, a memory error detector
==7520== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7520== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7520== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==7520== 
==7520== 
==7520== HEAP SUMMARY:
==7520==     in use at exit: 0 bytes in 0 blocks
==7520==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==7520== 
==7520== All heap blocks were freed -- no leaks are possible
==7520== 
==7520== For counts of detected and suppressed errors, rerun with: -v
==7520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7523== Memcheck, a memory error detector
==7523== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7523== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7523== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==7523== 
==7523== 
==7523== HEAP SUMMARY:
==7523==     in use at exit: 0 bytes in 0 blocks
==7523==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==7523== 
==7523== All heap blocks were freed -- no leaks are possible
==7523== 
==7523== For counts of detected and suppressed errors, rerun with: -v
==7523== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7527== Memcheck, a memory error detector
==7527== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7527== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7527== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==7527== 
==7527== 
==7527== HEAP SUMMARY:
==7527==     in use at exit: 0 bytes in 0 blocks
==7527==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==7527== 
==7527== All heap blocks were freed -- no leaks are possible
==7527== 
==7527== For counts of detected and suppressed errors, rerun with: -v
==7527== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7531== Memcheck, a memory error detector
==7531== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7531== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7531== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7531== 
==7531== 
==7531== HEAP SUMMARY:
==7531==     in use at exit: 0 bytes in 0 blocks
==7531==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==7531== 
==7531== All heap blocks were freed -- no leaks are possible
==7531== 
==7531== For counts of detected and suppressed errors, rerun with: -v
==7531== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7535== Memcheck, a memory error detector
==7535== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7535== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7535== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==7535== 
==7535== 
==7535== HEAP SUMMARY:
==7535==     in use at exit: 0 bytes in 0 blocks
==7535==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==7535== 
==7535== All heap blocks were freed -- no leaks are possible
==7535== 
==7535== For counts of detected and suppressed errors, rerun with: -v
==7535== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7540== Memcheck, a memory error detector
==7540== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7540== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7540== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7540== 
==7540== 
==7540== HEAP SUMMARY:
==7540==     in use at exit: 0 bytes in 0 blocks
==7540==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==7540== 
==7540== All heap blocks were freed -- no leaks are possible
==7540== 
==7540== For counts of detected and suppressed errors, rerun with: -v
==7540== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7544== Memcheck, a memory error detector
==7544== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7544== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7544== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==7544== 
==7544== 
==7544== HEAP SUMMARY:
==7544==     in use at exit: 0 bytes in 0 blocks
==7544==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==7544== 
==7544== All heap blocks were freed -- no leaks are possible
==7544== 
==7544== For counts of detected and suppressed errors, rerun with: -v
==7544== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7550== Memcheck, a memory error detector
==7550== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7550== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7550== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==7550== 
==7550== 
==7550== HEAP SUMMARY:
==7550==     in use at exit: 0 bytes in 0 blocks
==7550==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==7550== 
==7550== All heap blocks were freed -- no leaks are possible
==7550== 
==7550== For counts of detected and suppressed errors, rerun with: -v
==7550== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7554== Memcheck, a memory error detector
==7554== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7554== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7554== Command: ./test -r xml "List::insert\ contents\ #2"
==7554== 
==7554== 
==7554== HEAP SUMMARY:
==7554==     in use at exit: 0 bytes in 0 blocks
==7554==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==7554== 
==7554== All heap blocks were freed -- no leaks are possible
==7554== 
==7554== For counts of detected and suppressed errors, rerun with: -v
==7554== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7561== Memcheck, a memory error detector
==7561== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7561== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7561== Command: ./test -r xml "List::waterfall\ simple"
==7561== 
==7561== 
==7561== HEAP SUMMARY:
==7561==     in use at exit: 0 bytes in 0 blocks
==7561==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==7561== 
==7561== All heap blocks were freed -- no leaks are possible
==7561== 
==7561== For counts of detected and suppressed errors, rerun with: -v
==7561== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 19th 2019, 12:05:00 am**)
