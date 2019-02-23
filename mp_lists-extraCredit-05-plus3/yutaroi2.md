


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
==30377== Memcheck, a memory error detector
==30377== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30377== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30377== Command: ./test -r xml "List::insertFront\ size"
==30377== 
==30377== 
==30377== HEAP SUMMARY:
==30377==     in use at exit: 0 bytes in 0 blocks
==30377==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30377== 
==30377== All heap blocks were freed -- no leaks are possible
==30377== 
==30377== For counts of detected and suppressed errors, rerun with: -v
==30377== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30385== Memcheck, a memory error detector
==30385== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30385== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30385== Command: ./test -r xml "List::insertBack\ size"
==30385== 
==30385== 
==30385== HEAP SUMMARY:
==30385==     in use at exit: 0 bytes in 0 blocks
==30385==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30385== 
==30385== All heap blocks were freed -- no leaks are possible
==30385== 
==30385== For counts of detected and suppressed errors, rerun with: -v
==30385== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30387== Memcheck, a memory error detector
==30387== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30387== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30387== Command: ./test -r xml "List::insert\ contents"
==30387== 
==30387== 
==30387== HEAP SUMMARY:
==30387==     in use at exit: 0 bytes in 0 blocks
==30387==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==30387== 
==30387== All heap blocks were freed -- no leaks are possible
==30387== 
==30387== For counts of detected and suppressed errors, rerun with: -v
==30387== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30427== Memcheck, a memory error detector
==30427== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30427== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30427== Command: ./test -r xml "List::split\ simple"
==30427== 
==30427== 
==30427== HEAP SUMMARY:
==30427==     in use at exit: 0 bytes in 0 blocks
==30427==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==30427== 
==30427== All heap blocks were freed -- no leaks are possible
==30427== 
==30427== For counts of detected and suppressed errors, rerun with: -v
==30427== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30442== Memcheck, a memory error detector
==30442== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30442== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30442== Command: ./test -r xml "List::_destroy\ empty\ list"
==30442== 
==30442== 
==30442== HEAP SUMMARY:
==30442==     in use at exit: 0 bytes in 0 blocks
==30442==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==30442== 
==30442== All heap blocks were freed -- no leaks are possible
==30442== 
==30442== For counts of detected and suppressed errors, rerun with: -v
==30442== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30448== Memcheck, a memory error detector
==30448== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30448== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30448== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==30448== 
==30448== 
==30448== HEAP SUMMARY:
==30448==     in use at exit: 0 bytes in 0 blocks
==30448==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30448== 
==30448== All heap blocks were freed -- no leaks are possible
==30448== 
==30448== For counts of detected and suppressed errors, rerun with: -v
==30448== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30452== Memcheck, a memory error detector
==30452== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30452== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30452== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==30452== 
==30452== 
==30452== HEAP SUMMARY:
==30452==     in use at exit: 0 bytes in 0 blocks
==30452==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30452== 
==30452== All heap blocks were freed -- no leaks are possible
==30452== 
==30452== For counts of detected and suppressed errors, rerun with: -v
==30452== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30456== Memcheck, a memory error detector
==30456== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30456== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30456== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==30456== 
==30456== 
==30456== HEAP SUMMARY:
==30456==     in use at exit: 0 bytes in 0 blocks
==30456==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30456== 
==30456== All heap blocks were freed -- no leaks are possible
==30456== 
==30456== For counts of detected and suppressed errors, rerun with: -v
==30456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30460== Memcheck, a memory error detector
==30460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30460== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30460== 
==30460== 
==30460== HEAP SUMMARY:
==30460==     in use at exit: 0 bytes in 0 blocks
==30460==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30460== 
==30460== All heap blocks were freed -- no leaks are possible
==30460== 
==30460== For counts of detected and suppressed errors, rerun with: -v
==30460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30462== Memcheck, a memory error detector
==30462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30462== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30462== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==30462== 
==30462== 
==30462== HEAP SUMMARY:
==30462==     in use at exit: 0 bytes in 0 blocks
==30462==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30462== 
==30462== All heap blocks were freed -- no leaks are possible
==30462== 
==30462== For counts of detected and suppressed errors, rerun with: -v
==30462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30464== Memcheck, a memory error detector
==30464== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30464== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30464== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30464== 
==30464== 
==30464== HEAP SUMMARY:
==30464==     in use at exit: 0 bytes in 0 blocks
==30464==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30464== 
==30464== All heap blocks were freed -- no leaks are possible
==30464== 
==30464== For counts of detected and suppressed errors, rerun with: -v
==30464== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30466== Memcheck, a memory error detector
==30466== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30466== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30466== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==30466== 
==30466== 
==30466== HEAP SUMMARY:
==30466==     in use at exit: 0 bytes in 0 blocks
==30466==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==30466== 
==30466== All heap blocks were freed -- no leaks are possible
==30466== 
==30466== For counts of detected and suppressed errors, rerun with: -v
==30466== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30468== Memcheck, a memory error detector
==30468== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30468== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30468== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==30468== 
==30468== 
==30468== HEAP SUMMARY:
==30468==     in use at exit: 0 bytes in 0 blocks
==30468==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==30468== 
==30468== All heap blocks were freed -- no leaks are possible
==30468== 
==30468== For counts of detected and suppressed errors, rerun with: -v
==30468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30470== Memcheck, a memory error detector
==30470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30470== Command: ./test -r xml "List::insert\ contents\ #2"
==30470== 
==30470== 
==30470== HEAP SUMMARY:
==30470==     in use at exit: 0 bytes in 0 blocks
==30470==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==30470== 
==30470== All heap blocks were freed -- no leaks are possible
==30470== 
==30470== For counts of detected and suppressed errors, rerun with: -v
==30470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30473== Memcheck, a memory error detector
==30473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30473== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30473== Command: ./test -r xml "List::waterfall\ simple"
==30473== 
==30473== 
==30473== HEAP SUMMARY:
==30473==     in use at exit: 0 bytes in 0 blocks
==30473==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==30473== 
==30473== All heap blocks were freed -- no leaks are possible
==30473== 
==30473== For counts of detected and suppressed errors, rerun with: -v
==30473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 23rd 2019, 12:05:00 am**)
