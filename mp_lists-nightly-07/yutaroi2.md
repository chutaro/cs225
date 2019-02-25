


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
==13112== Memcheck, a memory error detector
==13112== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13112== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13112== Command: ./test -r xml "List::merge"
==13112== 
==13112== 
==13112== HEAP SUMMARY:
==13112==     in use at exit: 0 bytes in 0 blocks
==13112==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==13112== 
==13112== All heap blocks were freed -- no leaks are possible
==13112== 
==13112== For counts of detected and suppressed errors, rerun with: -v
==13112== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13229== Memcheck, a memory error detector
==13229== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13229== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13229== Command: ./test -r xml "List::sort\ simple\ #1"
==13229== 
==13229== 
==13229== HEAP SUMMARY:
==13229==     in use at exit: 0 bytes in 0 blocks
==13229==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==13229== 
==13229== All heap blocks were freed -- no leaks are possible
==13229== 
==13229== For counts of detected and suppressed errors, rerun with: -v
==13229== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13238== Memcheck, a memory error detector
==13238== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13238== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13238== Command: ./test -r xml "List::sort\ simple\ #2"
==13238== 
==13238== 
==13238== HEAP SUMMARY:
==13238==     in use at exit: 0 bytes in 0 blocks
==13238==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==13238== 
==13238== All heap blocks were freed -- no leaks are possible
==13238== 
==13238== For counts of detected and suppressed errors, rerun with: -v
==13238== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13262== Memcheck, a memory error detector
==13262== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13262== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13262== Command: ./test -r xml "List::insertFront\ size"
==13262== 
==13262== 
==13262== HEAP SUMMARY:
==13262==     in use at exit: 0 bytes in 0 blocks
==13262==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==13262== 
==13262== All heap blocks were freed -- no leaks are possible
==13262== 
==13262== For counts of detected and suppressed errors, rerun with: -v
==13262== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13278== Memcheck, a memory error detector
==13278== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13278== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13278== Command: ./test -r xml "List::insertBack\ size"
==13278== 
==13278== 
==13278== HEAP SUMMARY:
==13278==     in use at exit: 0 bytes in 0 blocks
==13278==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==13278== 
==13278== All heap blocks were freed -- no leaks are possible
==13278== 
==13278== For counts of detected and suppressed errors, rerun with: -v
==13278== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13282== Memcheck, a memory error detector
==13282== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13282== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13282== Command: ./test -r xml "List::insert\ contents"
==13282== 
==13282== 
==13282== HEAP SUMMARY:
==13282==     in use at exit: 0 bytes in 0 blocks
==13282==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==13282== 
==13282== All heap blocks were freed -- no leaks are possible
==13282== 
==13282== For counts of detected and suppressed errors, rerun with: -v
==13282== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13301== Memcheck, a memory error detector
==13301== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13301== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13301== Command: ./test -r xml "List::split\ simple"
==13301== 
==13301== 
==13301== HEAP SUMMARY:
==13301==     in use at exit: 0 bytes in 0 blocks
==13301==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==13301== 
==13301== All heap blocks were freed -- no leaks are possible
==13301== 
==13301== For counts of detected and suppressed errors, rerun with: -v
==13301== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13360== Memcheck, a memory error detector
==13360== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13360== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13360== Command: ./test -r xml "List::_destroy\ empty\ list"
==13360== 
==13360== 
==13360== HEAP SUMMARY:
==13360==     in use at exit: 0 bytes in 0 blocks
==13360==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==13360== 
==13360== All heap blocks were freed -- no leaks are possible
==13360== 
==13360== For counts of detected and suppressed errors, rerun with: -v
==13360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13366== Memcheck, a memory error detector
==13366== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13366== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13366== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==13366== 
==13366== 
==13366== HEAP SUMMARY:
==13366==     in use at exit: 0 bytes in 0 blocks
==13366==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==13366== 
==13366== All heap blocks were freed -- no leaks are possible
==13366== 
==13366== For counts of detected and suppressed errors, rerun with: -v
==13366== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13386== Memcheck, a memory error detector
==13386== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13386== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13386== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==13386== 
==13386== 
==13386== HEAP SUMMARY:
==13386==     in use at exit: 0 bytes in 0 blocks
==13386==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==13386== 
==13386== All heap blocks were freed -- no leaks are possible
==13386== 
==13386== For counts of detected and suppressed errors, rerun with: -v
==13386== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13398== Memcheck, a memory error detector
==13398== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13398== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13398== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==13398== 
==13398== 
==13398== HEAP SUMMARY:
==13398==     in use at exit: 0 bytes in 0 blocks
==13398==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==13398== 
==13398== All heap blocks were freed -- no leaks are possible
==13398== 
==13398== For counts of detected and suppressed errors, rerun with: -v
==13398== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13444== Memcheck, a memory error detector
==13444== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13444== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13444== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13444== 
==13444== 
==13444== HEAP SUMMARY:
==13444==     in use at exit: 0 bytes in 0 blocks
==13444==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==13444== 
==13444== All heap blocks were freed -- no leaks are possible
==13444== 
==13444== For counts of detected and suppressed errors, rerun with: -v
==13444== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13454== Memcheck, a memory error detector
==13454== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13454== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13454== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==13454== 
==13454== 
==13454== HEAP SUMMARY:
==13454==     in use at exit: 0 bytes in 0 blocks
==13454==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==13454== 
==13454== All heap blocks were freed -- no leaks are possible
==13454== 
==13454== For counts of detected and suppressed errors, rerun with: -v
==13454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13464== Memcheck, a memory error detector
==13464== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13464== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13464== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13464== 
==13464== 
==13464== HEAP SUMMARY:
==13464==     in use at exit: 0 bytes in 0 blocks
==13464==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==13464== 
==13464== All heap blocks were freed -- no leaks are possible
==13464== 
==13464== For counts of detected and suppressed errors, rerun with: -v
==13464== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13482== Memcheck, a memory error detector
==13482== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13482== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13482== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==13482== 
==13482== 
==13482== HEAP SUMMARY:
==13482==     in use at exit: 0 bytes in 0 blocks
==13482==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==13482== 
==13482== All heap blocks were freed -- no leaks are possible
==13482== 
==13482== For counts of detected and suppressed errors, rerun with: -v
==13482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13485== Memcheck, a memory error detector
==13485== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13485== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13485== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==13485== 
==13485== 
==13485== HEAP SUMMARY:
==13485==     in use at exit: 0 bytes in 0 blocks
==13485==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==13485== 
==13485== All heap blocks were freed -- no leaks are possible
==13485== 
==13485== For counts of detected and suppressed errors, rerun with: -v
==13485== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13499== Memcheck, a memory error detector
==13499== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13499== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13499== Command: ./test -r xml "List::reverse\ simple"
==13499== 
==13499== 
==13499== HEAP SUMMARY:
==13499==     in use at exit: 0 bytes in 0 blocks
==13499==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==13499== 
==13499== All heap blocks were freed -- no leaks are possible
==13499== 
==13499== For counts of detected and suppressed errors, rerun with: -v
==13499== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13501== Memcheck, a memory error detector
==13501== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13501== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13501== Command: ./test -r xml "List::reverse\ edge\ cases"
==13501== 
==13501== 
==13501== HEAP SUMMARY:
==13501==     in use at exit: 0 bytes in 0 blocks
==13501==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==13501== 
==13501== All heap blocks were freed -- no leaks are possible
==13501== 
==13501== For counts of detected and suppressed errors, rerun with: -v
==13501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13503== Memcheck, a memory error detector
==13503== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13503== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13503== Command: ./test -r xml "List::reverseNth\ #3"
==13503== 
==13503== 
==13503== HEAP SUMMARY:
==13503==     in use at exit: 0 bytes in 0 blocks
==13503==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==13503== 
==13503== All heap blocks were freed -- no leaks are possible
==13503== 
==13503== For counts of detected and suppressed errors, rerun with: -v
==13503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13517== Memcheck, a memory error detector
==13517== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13517== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13517== Command: ./test -r xml "List::merge\ #2"
==13517== 
==13517== 
==13517== HEAP SUMMARY:
==13517==     in use at exit: 0 bytes in 0 blocks
==13517==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==13517== 
==13517== All heap blocks were freed -- no leaks are possible
==13517== 
==13517== For counts of detected and suppressed errors, rerun with: -v
==13517== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13519== Memcheck, a memory error detector
==13519== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13519== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13519== Command: ./test -r xml "List::sort\ simple\ #3"
==13519== 
==13519== 
==13519== HEAP SUMMARY:
==13519==     in use at exit: 0 bytes in 0 blocks
==13519==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==13519== 
==13519== All heap blocks were freed -- no leaks are possible
==13519== 
==13519== For counts of detected and suppressed errors, rerun with: -v
==13519== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13581== Memcheck, a memory error detector
==13581== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13581== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13581== Command: ./test -r xml "List::insert\ contents\ #2"
==13581== 
==13581== 
==13581== HEAP SUMMARY:
==13581==     in use at exit: 0 bytes in 0 blocks
==13581==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==13581== 
==13581== All heap blocks were freed -- no leaks are possible
==13581== 
==13581== For counts of detected and suppressed errors, rerun with: -v
==13581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13603== Memcheck, a memory error detector
==13603== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13603== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13603== Command: ./test -r xml "List::waterfall\ simple"
==13603== 
==13603== 
==13603== HEAP SUMMARY:
==13603==     in use at exit: 0 bytes in 0 blocks
==13603==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==13603== 
==13603== All heap blocks were freed -- no leaks are possible
==13603== 
==13603== For counts of detected and suppressed errors, rerun with: -v
==13603== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
