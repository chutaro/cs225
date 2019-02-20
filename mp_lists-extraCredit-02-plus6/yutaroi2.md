


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
==13014== Memcheck, a memory error detector
==13014== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13014== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13014== Command: ./test -r xml "List::insertFront\ size"
==13014== 
==13014== 
==13014== HEAP SUMMARY:
==13014==     in use at exit: 0 bytes in 0 blocks
==13014==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==13014== 
==13014== All heap blocks were freed -- no leaks are possible
==13014== 
==13014== For counts of detected and suppressed errors, rerun with: -v
==13014== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13016== Memcheck, a memory error detector
==13016== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13016== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13016== Command: ./test -r xml "List::insertBack\ size"
==13016== 
==13016== 
==13016== HEAP SUMMARY:
==13016==     in use at exit: 0 bytes in 0 blocks
==13016==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==13016== 
==13016== All heap blocks were freed -- no leaks are possible
==13016== 
==13016== For counts of detected and suppressed errors, rerun with: -v
==13016== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13018== Memcheck, a memory error detector
==13018== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13018== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13018== Command: ./test -r xml "List::insert\ contents"
==13018== 
==13018== 
==13018== HEAP SUMMARY:
==13018==     in use at exit: 0 bytes in 0 blocks
==13018==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==13018== 
==13018== All heap blocks were freed -- no leaks are possible
==13018== 
==13018== For counts of detected and suppressed errors, rerun with: -v
==13018== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13021== Memcheck, a memory error detector
==13021== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13021== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13021== Command: ./test -r xml "List::split\ simple"
==13021== 
==13021== 
==13021== HEAP SUMMARY:
==13021==     in use at exit: 0 bytes in 0 blocks
==13021==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==13021== 
==13021== All heap blocks were freed -- no leaks are possible
==13021== 
==13021== For counts of detected and suppressed errors, rerun with: -v
==13021== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13024== Memcheck, a memory error detector
==13024== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13024== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13024== Command: ./test -r xml "List::_destroy\ empty\ list"
==13024== 
==13024== 
==13024== HEAP SUMMARY:
==13024==     in use at exit: 0 bytes in 0 blocks
==13024==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==13024== 
==13024== All heap blocks were freed -- no leaks are possible
==13024== 
==13024== For counts of detected and suppressed errors, rerun with: -v
==13024== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13026== Memcheck, a memory error detector
==13026== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13026== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13026== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==13026== 
==13026== 
==13026== HEAP SUMMARY:
==13026==     in use at exit: 0 bytes in 0 blocks
==13026==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==13026== 
==13026== All heap blocks were freed -- no leaks are possible
==13026== 
==13026== For counts of detected and suppressed errors, rerun with: -v
==13026== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13028== Memcheck, a memory error detector
==13028== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13028== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13028== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==13028== 
==13028== 
==13028== HEAP SUMMARY:
==13028==     in use at exit: 0 bytes in 0 blocks
==13028==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==13028== 
==13028== All heap blocks were freed -- no leaks are possible
==13028== 
==13028== For counts of detected and suppressed errors, rerun with: -v
==13028== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13030== Memcheck, a memory error detector
==13030== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13030== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13030== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==13030== 
==13030== 
==13030== HEAP SUMMARY:
==13030==     in use at exit: 0 bytes in 0 blocks
==13030==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==13030== 
==13030== All heap blocks were freed -- no leaks are possible
==13030== 
==13030== For counts of detected and suppressed errors, rerun with: -v
==13030== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13032== Memcheck, a memory error detector
==13032== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13032== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13032== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13032== 
==13032== 
==13032== HEAP SUMMARY:
==13032==     in use at exit: 0 bytes in 0 blocks
==13032==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==13032== 
==13032== All heap blocks were freed -- no leaks are possible
==13032== 
==13032== For counts of detected and suppressed errors, rerun with: -v
==13032== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13034== Memcheck, a memory error detector
==13034== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13034== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13034== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==13034== 
==13034== 
==13034== HEAP SUMMARY:
==13034==     in use at exit: 0 bytes in 0 blocks
==13034==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==13034== 
==13034== All heap blocks were freed -- no leaks are possible
==13034== 
==13034== For counts of detected and suppressed errors, rerun with: -v
==13034== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13036== Memcheck, a memory error detector
==13036== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13036== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13036== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13036== 
==13036== 
==13036== HEAP SUMMARY:
==13036==     in use at exit: 0 bytes in 0 blocks
==13036==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==13036== 
==13036== All heap blocks were freed -- no leaks are possible
==13036== 
==13036== For counts of detected and suppressed errors, rerun with: -v
==13036== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13038== Memcheck, a memory error detector
==13038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13038== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13038== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==13038== 
==13038== 
==13038== HEAP SUMMARY:
==13038==     in use at exit: 0 bytes in 0 blocks
==13038==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==13038== 
==13038== All heap blocks were freed -- no leaks are possible
==13038== 
==13038== For counts of detected and suppressed errors, rerun with: -v
==13038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13040== Memcheck, a memory error detector
==13040== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13040== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13040== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==13040== 
==13040== 
==13040== HEAP SUMMARY:
==13040==     in use at exit: 0 bytes in 0 blocks
==13040==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==13040== 
==13040== All heap blocks were freed -- no leaks are possible
==13040== 
==13040== For counts of detected and suppressed errors, rerun with: -v
==13040== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13042== Memcheck, a memory error detector
==13042== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13042== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13042== Command: ./test -r xml "List::insert\ contents\ #2"
==13042== 
==13042== 
==13042== HEAP SUMMARY:
==13042==     in use at exit: 0 bytes in 0 blocks
==13042==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==13042== 
==13042== All heap blocks were freed -- no leaks are possible
==13042== 
==13042== For counts of detected and suppressed errors, rerun with: -v
==13042== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13045== Memcheck, a memory error detector
==13045== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13045== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13045== Command: ./test -r xml "List::waterfall\ simple"
==13045== 
==13045== 
==13045== HEAP SUMMARY:
==13045==     in use at exit: 0 bytes in 0 blocks
==13045==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==13045== 
==13045== All heap blocks were freed -- no leaks are possible
==13045== 
==13045== For counts of detected and suppressed errors, rerun with: -v
==13045== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
