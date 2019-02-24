


## Score: 109/114 (95.61%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==29714== Memcheck, a memory error detector
==29714== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29714== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29714== Command: ./test -r xml "List::merge"
==29714== 
==29714== 
==29714== HEAP SUMMARY:
==29714==     in use at exit: 0 bytes in 0 blocks
==29714==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==29714== 
==29714== All heap blocks were freed -- no leaks are possible
==29714== 
==29714== For counts of detected and suppressed errors, rerun with: -v
==29714== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==29733== Memcheck, a memory error detector
==29733== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29733== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29733== Command: ./test -r xml "List::sort\ simple\ #1"
==29733== 
==29733== 
==29733== HEAP SUMMARY:
==29733==     in use at exit: 0 bytes in 0 blocks
==29733==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==29733== 
==29733== All heap blocks were freed -- no leaks are possible
==29733== 
==29733== For counts of detected and suppressed errors, rerun with: -v
==29733== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==29736== Memcheck, a memory error detector
==29736== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29736== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29736== Command: ./test -r xml "List::sort\ simple\ #2"
==29736== 
==29736== 
==29736== HEAP SUMMARY:
==29736==     in use at exit: 0 bytes in 0 blocks
==29736==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==29736== 
==29736== All heap blocks were freed -- no leaks are possible
==29736== 
==29736== For counts of detected and suppressed errors, rerun with: -v
==29736== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==29792== Memcheck, a memory error detector
==29792== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29792== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29792== Command: ./test -r xml "List::insertFront\ size"
==29792== 
==29792== 
==29792== HEAP SUMMARY:
==29792==     in use at exit: 0 bytes in 0 blocks
==29792==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29792== 
==29792== All heap blocks were freed -- no leaks are possible
==29792== 
==29792== For counts of detected and suppressed errors, rerun with: -v
==29792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29796== Memcheck, a memory error detector
==29796== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29796== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29796== Command: ./test -r xml "List::insertBack\ size"
==29796== 
==29796== 
==29796== HEAP SUMMARY:
==29796==     in use at exit: 0 bytes in 0 blocks
==29796==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29796== 
==29796== All heap blocks were freed -- no leaks are possible
==29796== 
==29796== For counts of detected and suppressed errors, rerun with: -v
==29796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29806== Memcheck, a memory error detector
==29806== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29806== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29806== Command: ./test -r xml "List::insert\ contents"
==29806== 
==29806== 
==29806== HEAP SUMMARY:
==29806==     in use at exit: 0 bytes in 0 blocks
==29806==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==29806== 
==29806== All heap blocks were freed -- no leaks are possible
==29806== 
==29806== For counts of detected and suppressed errors, rerun with: -v
==29806== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30044== Memcheck, a memory error detector
==30044== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30044== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30044== Command: ./test -r xml "List::split\ simple"
==30044== 
==30044== 
==30044== HEAP SUMMARY:
==30044==     in use at exit: 0 bytes in 0 blocks
==30044==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==30044== 
==30044== All heap blocks were freed -- no leaks are possible
==30044== 
==30044== For counts of detected and suppressed errors, rerun with: -v
==30044== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30047== Memcheck, a memory error detector
==30047== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30047== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30047== Command: ./test -r xml "List::_destroy\ empty\ list"
==30047== 
==30047== 
==30047== HEAP SUMMARY:
==30047==     in use at exit: 0 bytes in 0 blocks
==30047==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==30047== 
==30047== All heap blocks were freed -- no leaks are possible
==30047== 
==30047== For counts of detected and suppressed errors, rerun with: -v
==30047== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30055== Memcheck, a memory error detector
==30055== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30055== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30055== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==30055== 
==30055== 
==30055== HEAP SUMMARY:
==30055==     in use at exit: 0 bytes in 0 blocks
==30055==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==30055== 
==30055== All heap blocks were freed -- no leaks are possible
==30055== 
==30055== For counts of detected and suppressed errors, rerun with: -v
==30055== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30063== Memcheck, a memory error detector
==30063== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30063== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30063== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==30063== 
==30063== 
==30063== HEAP SUMMARY:
==30063==     in use at exit: 0 bytes in 0 blocks
==30063==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==30063== 
==30063== All heap blocks were freed -- no leaks are possible
==30063== 
==30063== For counts of detected and suppressed errors, rerun with: -v
==30063== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30065== Memcheck, a memory error detector
==30065== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30065== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30065== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==30065== 
==30065== 
==30065== HEAP SUMMARY:
==30065==     in use at exit: 0 bytes in 0 blocks
==30065==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==30065== 
==30065== All heap blocks were freed -- no leaks are possible
==30065== 
==30065== For counts of detected and suppressed errors, rerun with: -v
==30065== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30067== Memcheck, a memory error detector
==30067== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30067== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30067== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30067== 
==30067== 
==30067== HEAP SUMMARY:
==30067==     in use at exit: 0 bytes in 0 blocks
==30067==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==30067== 
==30067== All heap blocks were freed -- no leaks are possible
==30067== 
==30067== For counts of detected and suppressed errors, rerun with: -v
==30067== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30094== Memcheck, a memory error detector
==30094== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30094== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30094== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==30094== 
==30094== 
==30094== HEAP SUMMARY:
==30094==     in use at exit: 0 bytes in 0 blocks
==30094==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==30094== 
==30094== All heap blocks were freed -- no leaks are possible
==30094== 
==30094== For counts of detected and suppressed errors, rerun with: -v
==30094== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30099== Memcheck, a memory error detector
==30099== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30099== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30099== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30099== 
==30099== 
==30099== HEAP SUMMARY:
==30099==     in use at exit: 0 bytes in 0 blocks
==30099==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==30099== 
==30099== All heap blocks were freed -- no leaks are possible
==30099== 
==30099== For counts of detected and suppressed errors, rerun with: -v
==30099== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30111== Memcheck, a memory error detector
==30111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30111== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30111== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==30111== 
==30111== 
==30111== HEAP SUMMARY:
==30111==     in use at exit: 0 bytes in 0 blocks
==30111==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==30111== 
==30111== All heap blocks were freed -- no leaks are possible
==30111== 
==30111== For counts of detected and suppressed errors, rerun with: -v
==30111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30114== Memcheck, a memory error detector
==30114== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30114== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30114== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==30114== 
==30114== 
==30114== HEAP SUMMARY:
==30114==     in use at exit: 0 bytes in 0 blocks
==30114==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==30114== 
==30114== All heap blocks were freed -- no leaks are possible
==30114== 
==30114== For counts of detected and suppressed errors, rerun with: -v
==30114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==30119== Memcheck, a memory error detector
==30119== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30119== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30119== Command: ./test -r xml "List::reverse\ simple"
==30119== 
==30119== 
==30119== HEAP SUMMARY:
==30119==     in use at exit: 0 bytes in 0 blocks
==30119==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==30119== 
==30119== All heap blocks were freed -- no leaks are possible
==30119== 
==30119== For counts of detected and suppressed errors, rerun with: -v
==30119== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==30124== Memcheck, a memory error detector
==30124== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30124== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30124== Command: ./test -r xml "List::reverse\ edge\ cases"
==30124== 
==30124== 
==30124== HEAP SUMMARY:
==30124==     in use at exit: 0 bytes in 0 blocks
==30124==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==30124== 
==30124== All heap blocks were freed -- no leaks are possible
==30124== 
==30124== For counts of detected and suppressed errors, rerun with: -v
==30124== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==30128== Memcheck, a memory error detector
==30128== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30128== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30128== Command: ./test -r xml "List::reverseNth\ #3"
==30128== 
==30128== 
==30128== HEAP SUMMARY:
==30128==     in use at exit: 0 bytes in 0 blocks
==30128==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==30128== 
==30128== All heap blocks were freed -- no leaks are possible
==30128== 
==30128== For counts of detected and suppressed errors, rerun with: -v
==30128== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==30132== Memcheck, a memory error detector
==30132== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30132== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30132== Command: ./test -r xml "List::merge\ #2"
==30132== 
==30132== 
==30132== HEAP SUMMARY:
==30132==     in use at exit: 0 bytes in 0 blocks
==30132==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==30132== 
==30132== All heap blocks were freed -- no leaks are possible
==30132== 
==30132== For counts of detected and suppressed errors, rerun with: -v
==30132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==30138== Memcheck, a memory error detector
==30138== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30138== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30138== Command: ./test -r xml "List::sort\ simple\ #3"
==30138== 
==30138== 
==30138== HEAP SUMMARY:
==30138==     in use at exit: 0 bytes in 0 blocks
==30138==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==30138== 
==30138== All heap blocks were freed -- no leaks are possible
==30138== 
==30138== For counts of detected and suppressed errors, rerun with: -v
==30138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
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
==30143== Memcheck, a memory error detector
==30143== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30143== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30143== Command: ./test -r xml "List::insert\ contents\ #2"
==30143== 
==30143== 
==30143== HEAP SUMMARY:
==30143==     in use at exit: 0 bytes in 0 blocks
==30143==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==30143== 
==30143== All heap blocks were freed -- no leaks are possible
==30143== 
==30143== For counts of detected and suppressed errors, rerun with: -v
==30143== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30154== Memcheck, a memory error detector
==30154== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30154== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30154== Command: ./test -r xml "List::waterfall\ simple"
==30154== 
==30154== 
==30154== HEAP SUMMARY:
==30154==     in use at exit: 0 bytes in 0 blocks
==30154==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==30154== 
==30154== All heap blocks were freed -- no leaks are possible
==30154== 
==30154== For counts of detected and suppressed errors, rerun with: -v
==30154== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
