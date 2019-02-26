


## Score: 114/114 (100.00%)


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
==5387== Memcheck, a memory error detector
==5387== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5387== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5387== Command: ./test -r xml "List::merge"
==5387== 
==5387== 
==5387== HEAP SUMMARY:
==5387==     in use at exit: 0 bytes in 0 blocks
==5387==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==5387== 
==5387== All heap blocks were freed -- no leaks are possible
==5387== 
==5387== For counts of detected and suppressed errors, rerun with: -v
==5387== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5391== Memcheck, a memory error detector
==5391== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5391== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5391== Command: ./test -r xml "List::sort\ simple\ #1"
==5391== 
==5391== 
==5391== HEAP SUMMARY:
==5391==     in use at exit: 0 bytes in 0 blocks
==5391==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==5391== 
==5391== All heap blocks were freed -- no leaks are possible
==5391== 
==5391== For counts of detected and suppressed errors, rerun with: -v
==5391== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5394== Memcheck, a memory error detector
==5394== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5394== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5394== Command: ./test -r xml "List::sort\ simple\ #2"
==5394== 
==5394== 
==5394== HEAP SUMMARY:
==5394==     in use at exit: 0 bytes in 0 blocks
==5394==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==5394== 
==5394== All heap blocks were freed -- no leaks are possible
==5394== 
==5394== For counts of detected and suppressed errors, rerun with: -v
==5394== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5398== Memcheck, a memory error detector
==5398== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5398== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5398== Command: ./test -r xml "List::insertFront\ size"
==5398== 
==5398== 
==5398== HEAP SUMMARY:
==5398==     in use at exit: 0 bytes in 0 blocks
==5398==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5398== 
==5398== All heap blocks were freed -- no leaks are possible
==5398== 
==5398== For counts of detected and suppressed errors, rerun with: -v
==5398== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5400== Memcheck, a memory error detector
==5400== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5400== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5400== Command: ./test -r xml "List::insertBack\ size"
==5400== 
==5400== 
==5400== HEAP SUMMARY:
==5400==     in use at exit: 0 bytes in 0 blocks
==5400==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5400== 
==5400== All heap blocks were freed -- no leaks are possible
==5400== 
==5400== For counts of detected and suppressed errors, rerun with: -v
==5400== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5402== Memcheck, a memory error detector
==5402== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5402== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5402== Command: ./test -r xml "List::insert\ contents"
==5402== 
==5402== 
==5402== HEAP SUMMARY:
==5402==     in use at exit: 0 bytes in 0 blocks
==5402==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==5402== 
==5402== All heap blocks were freed -- no leaks are possible
==5402== 
==5402== For counts of detected and suppressed errors, rerun with: -v
==5402== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5406== Memcheck, a memory error detector
==5406== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5406== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5406== Command: ./test -r xml "List::split\ simple"
==5406== 
==5406== 
==5406== HEAP SUMMARY:
==5406==     in use at exit: 0 bytes in 0 blocks
==5406==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==5406== 
==5406== All heap blocks were freed -- no leaks are possible
==5406== 
==5406== For counts of detected and suppressed errors, rerun with: -v
==5406== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5409== Memcheck, a memory error detector
==5409== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5409== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5409== Command: ./test -r xml "List::_destroy\ empty\ list"
==5409== 
==5409== 
==5409== HEAP SUMMARY:
==5409==     in use at exit: 0 bytes in 0 blocks
==5409==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==5409== 
==5409== All heap blocks were freed -- no leaks are possible
==5409== 
==5409== For counts of detected and suppressed errors, rerun with: -v
==5409== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5411== Memcheck, a memory error detector
==5411== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5411== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5411== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==5411== 
==5411== 
==5411== HEAP SUMMARY:
==5411==     in use at exit: 0 bytes in 0 blocks
==5411==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5411== 
==5411== All heap blocks were freed -- no leaks are possible
==5411== 
==5411== For counts of detected and suppressed errors, rerun with: -v
==5411== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5413== Memcheck, a memory error detector
==5413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5413== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5413== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==5413== 
==5413== 
==5413== HEAP SUMMARY:
==5413==     in use at exit: 0 bytes in 0 blocks
==5413==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5413== 
==5413== All heap blocks were freed -- no leaks are possible
==5413== 
==5413== For counts of detected and suppressed errors, rerun with: -v
==5413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5415== Memcheck, a memory error detector
==5415== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5415== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5415== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==5415== 
==5415== 
==5415== HEAP SUMMARY:
==5415==     in use at exit: 0 bytes in 0 blocks
==5415==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5415== 
==5415== All heap blocks were freed -- no leaks are possible
==5415== 
==5415== For counts of detected and suppressed errors, rerun with: -v
==5415== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5417== Memcheck, a memory error detector
==5417== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5417== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5417== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5417== 
==5417== 
==5417== HEAP SUMMARY:
==5417==     in use at exit: 0 bytes in 0 blocks
==5417==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5417== 
==5417== All heap blocks were freed -- no leaks are possible
==5417== 
==5417== For counts of detected and suppressed errors, rerun with: -v
==5417== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5419== Memcheck, a memory error detector
==5419== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5419== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5419== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==5419== 
==5419== 
==5419== HEAP SUMMARY:
==5419==     in use at exit: 0 bytes in 0 blocks
==5419==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5419== 
==5419== All heap blocks were freed -- no leaks are possible
==5419== 
==5419== For counts of detected and suppressed errors, rerun with: -v
==5419== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5421== Memcheck, a memory error detector
==5421== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5421== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5421== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5421== 
==5421== 
==5421== HEAP SUMMARY:
==5421==     in use at exit: 0 bytes in 0 blocks
==5421==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5421== 
==5421== All heap blocks were freed -- no leaks are possible
==5421== 
==5421== For counts of detected and suppressed errors, rerun with: -v
==5421== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5423== Memcheck, a memory error detector
==5423== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5423== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5423== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==5423== 
==5423== 
==5423== HEAP SUMMARY:
==5423==     in use at exit: 0 bytes in 0 blocks
==5423==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==5423== 
==5423== All heap blocks were freed -- no leaks are possible
==5423== 
==5423== For counts of detected and suppressed errors, rerun with: -v
==5423== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5425== Memcheck, a memory error detector
==5425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5425== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5425== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==5425== 
==5425== 
==5425== HEAP SUMMARY:
==5425==     in use at exit: 0 bytes in 0 blocks
==5425==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==5425== 
==5425== All heap blocks were freed -- no leaks are possible
==5425== 
==5425== For counts of detected and suppressed errors, rerun with: -v
==5425== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5430== Memcheck, a memory error detector
==5430== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5430== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5430== Command: ./test -r xml "List::reverse\ simple"
==5430== 
==5430== 
==5430== HEAP SUMMARY:
==5430==     in use at exit: 0 bytes in 0 blocks
==5430==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==5430== 
==5430== All heap blocks were freed -- no leaks are possible
==5430== 
==5430== For counts of detected and suppressed errors, rerun with: -v
==5430== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5432== Memcheck, a memory error detector
==5432== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5432== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5432== Command: ./test -r xml "List::reverse\ edge\ cases"
==5432== 
==5432== 
==5432== HEAP SUMMARY:
==5432==     in use at exit: 0 bytes in 0 blocks
==5432==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==5432== 
==5432== All heap blocks were freed -- no leaks are possible
==5432== 
==5432== For counts of detected and suppressed errors, rerun with: -v
==5432== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5435== Memcheck, a memory error detector
==5435== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5435== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5435== Command: ./test -r xml "List::reverseNth\ #3"
==5435== 
==5435== 
==5435== HEAP SUMMARY:
==5435==     in use at exit: 0 bytes in 0 blocks
==5435==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==5435== 
==5435== All heap blocks were freed -- no leaks are possible
==5435== 
==5435== For counts of detected and suppressed errors, rerun with: -v
==5435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5437== Memcheck, a memory error detector
==5437== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5437== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5437== Command: ./test -r xml "List::merge\ #2"
==5437== 
==5437== 
==5437== HEAP SUMMARY:
==5437==     in use at exit: 0 bytes in 0 blocks
==5437==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==5437== 
==5437== All heap blocks were freed -- no leaks are possible
==5437== 
==5437== For counts of detected and suppressed errors, rerun with: -v
==5437== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5439== Memcheck, a memory error detector
==5439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5439== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5439== Command: ./test -r xml "List::sort\ simple\ #3"
==5439== 
==5439== 
==5439== HEAP SUMMARY:
==5439==     in use at exit: 0 bytes in 0 blocks
==5439==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==5439== 
==5439== All heap blocks were freed -- no leaks are possible
==5439== 
==5439== For counts of detected and suppressed errors, rerun with: -v
==5439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5442== Memcheck, a memory error detector
==5442== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5442== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5442== Command: ./test -r xml "List::insert\ contents\ #2"
==5442== 
==5442== 
==5442== HEAP SUMMARY:
==5442==     in use at exit: 0 bytes in 0 blocks
==5442==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==5442== 
==5442== All heap blocks were freed -- no leaks are possible
==5442== 
==5442== For counts of detected and suppressed errors, rerun with: -v
==5442== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==5444== Memcheck, a memory error detector
==5444== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5444== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5444== Command: ./test -r xml "List::split\ edge\ cases"
==5444== 
==5444== 
==5444== HEAP SUMMARY:
==5444==     in use at exit: 0 bytes in 0 blocks
==5444==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==5444== 
==5444== All heap blocks were freed -- no leaks are possible
==5444== 
==5444== For counts of detected and suppressed errors, rerun with: -v
==5444== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==5446== Memcheck, a memory error detector
==5446== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5446== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5446== Command: ./test -r xml "List::waterfall\ simple"
==5446== 
==5446== 
==5446== HEAP SUMMARY:
==5446==     in use at exit: 0 bytes in 0 blocks
==5446==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==5446== 
==5446== All heap blocks were freed -- no leaks are possible
==5446== 
==5446== For counts of detected and suppressed errors, rerun with: -v
==5446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **09c023a87d58c6dae6a40d569769981773ff047f** (from **February 26th 2019, 12:05:00 am**)
