


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
==422== Memcheck, a memory error detector
==422== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==422== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==422== Command: ./test -r xml "List::merge"
==422== 
==422== 
==422== HEAP SUMMARY:
==422==     in use at exit: 0 bytes in 0 blocks
==422==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==422== 
==422== All heap blocks were freed -- no leaks are possible
==422== 
==422== For counts of detected and suppressed errors, rerun with: -v
==422== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==429== Memcheck, a memory error detector
==429== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==429== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==429== Command: ./test -r xml "List::sort\ simple\ #1"
==429== 
==429== 
==429== HEAP SUMMARY:
==429==     in use at exit: 0 bytes in 0 blocks
==429==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==429== 
==429== All heap blocks were freed -- no leaks are possible
==429== 
==429== For counts of detected and suppressed errors, rerun with: -v
==429== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==431== Memcheck, a memory error detector
==431== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==431== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==431== Command: ./test -r xml "List::sort\ simple\ #2"
==431== 
==431== 
==431== HEAP SUMMARY:
==431==     in use at exit: 0 bytes in 0 blocks
==431==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==431== 
==431== All heap blocks were freed -- no leaks are possible
==431== 
==431== For counts of detected and suppressed errors, rerun with: -v
==431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==435== Memcheck, a memory error detector
==435== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==435== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==435== Command: ./test -r xml "List::insertFront\ size"
==435== 
==435== 
==435== HEAP SUMMARY:
==435==     in use at exit: 0 bytes in 0 blocks
==435==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==435== 
==435== All heap blocks were freed -- no leaks are possible
==435== 
==435== For counts of detected and suppressed errors, rerun with: -v
==435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==440== Memcheck, a memory error detector
==440== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==440== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==440== Command: ./test -r xml "List::insertBack\ size"
==440== 
==440== 
==440== HEAP SUMMARY:
==440==     in use at exit: 0 bytes in 0 blocks
==440==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==440== 
==440== All heap blocks were freed -- no leaks are possible
==440== 
==440== For counts of detected and suppressed errors, rerun with: -v
==440== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==447== Memcheck, a memory error detector
==447== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==447== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==447== Command: ./test -r xml "List::insert\ contents"
==447== 
==447== 
==447== HEAP SUMMARY:
==447==     in use at exit: 0 bytes in 0 blocks
==447==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==447== 
==447== All heap blocks were freed -- no leaks are possible
==447== 
==447== For counts of detected and suppressed errors, rerun with: -v
==447== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==451== Memcheck, a memory error detector
==451== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==451== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==451== Command: ./test -r xml "List::split\ simple"
==451== 
==451== 
==451== HEAP SUMMARY:
==451==     in use at exit: 0 bytes in 0 blocks
==451==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==451== 
==451== All heap blocks were freed -- no leaks are possible
==451== 
==451== For counts of detected and suppressed errors, rerun with: -v
==451== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==454== Memcheck, a memory error detector
==454== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==454== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==454== Command: ./test -r xml "List::_destroy\ empty\ list"
==454== 
==454== 
==454== HEAP SUMMARY:
==454==     in use at exit: 0 bytes in 0 blocks
==454==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==454== 
==454== All heap blocks were freed -- no leaks are possible
==454== 
==454== For counts of detected and suppressed errors, rerun with: -v
==454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==456== Memcheck, a memory error detector
==456== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==456== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==456== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==456== 
==456== 
==456== HEAP SUMMARY:
==456==     in use at exit: 0 bytes in 0 blocks
==456==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==456== 
==456== All heap blocks were freed -- no leaks are possible
==456== 
==456== For counts of detected and suppressed errors, rerun with: -v
==456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==458== Memcheck, a memory error detector
==458== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==458== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==458== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==458== 
==458== 
==458== HEAP SUMMARY:
==458==     in use at exit: 0 bytes in 0 blocks
==458==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==458== 
==458== All heap blocks were freed -- no leaks are possible
==458== 
==458== For counts of detected and suppressed errors, rerun with: -v
==458== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==460== Memcheck, a memory error detector
==460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==460== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==460== 
==460== 
==460== HEAP SUMMARY:
==460==     in use at exit: 0 bytes in 0 blocks
==460==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==460== 
==460== All heap blocks were freed -- no leaks are possible
==460== 
==460== For counts of detected and suppressed errors, rerun with: -v
==460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==462== Memcheck, a memory error detector
==462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==462== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==462== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==462== 
==462== 
==462== HEAP SUMMARY:
==462==     in use at exit: 0 bytes in 0 blocks
==462==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==462== 
==462== All heap blocks were freed -- no leaks are possible
==462== 
==462== For counts of detected and suppressed errors, rerun with: -v
==462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==464== Memcheck, a memory error detector
==464== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==464== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==464== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==464== 
==464== 
==464== HEAP SUMMARY:
==464==     in use at exit: 0 bytes in 0 blocks
==464==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==464== 
==464== All heap blocks were freed -- no leaks are possible
==464== 
==464== For counts of detected and suppressed errors, rerun with: -v
==464== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==466== Memcheck, a memory error detector
==466== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==466== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==466== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==466== 
==466== 
==466== HEAP SUMMARY:
==466==     in use at exit: 0 bytes in 0 blocks
==466==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==466== 
==466== All heap blocks were freed -- no leaks are possible
==466== 
==466== For counts of detected and suppressed errors, rerun with: -v
==466== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==468== Memcheck, a memory error detector
==468== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==468== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==468== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==468== 
==468== 
==468== HEAP SUMMARY:
==468==     in use at exit: 0 bytes in 0 blocks
==468==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==468== 
==468== All heap blocks were freed -- no leaks are possible
==468== 
==468== For counts of detected and suppressed errors, rerun with: -v
==468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==470== Memcheck, a memory error detector
==470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==470== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==470== 
==470== 
==470== HEAP SUMMARY:
==470==     in use at exit: 0 bytes in 0 blocks
==470==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==470== 
==470== All heap blocks were freed -- no leaks are possible
==470== 
==470== For counts of detected and suppressed errors, rerun with: -v
==470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==472== Memcheck, a memory error detector
==472== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==472== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==472== Command: ./test -r xml "List::reverse\ simple"
==472== 
==472== 
==472== HEAP SUMMARY:
==472==     in use at exit: 0 bytes in 0 blocks
==472==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==472== 
==472== All heap blocks were freed -- no leaks are possible
==472== 
==472== For counts of detected and suppressed errors, rerun with: -v
==472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==474== Memcheck, a memory error detector
==474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==474== Command: ./test -r xml "List::reverse\ edge\ cases"
==474== 
==474== 
==474== HEAP SUMMARY:
==474==     in use at exit: 0 bytes in 0 blocks
==474==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==474== 
==474== All heap blocks were freed -- no leaks are possible
==474== 
==474== For counts of detected and suppressed errors, rerun with: -v
==474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==476== Memcheck, a memory error detector
==476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==476== Command: ./test -r xml "List::reverseNth\ #3"
==476== 
==476== 
==476== HEAP SUMMARY:
==476==     in use at exit: 0 bytes in 0 blocks
==476==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==476== 
==476== All heap blocks were freed -- no leaks are possible
==476== 
==476== For counts of detected and suppressed errors, rerun with: -v
==476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==478== Memcheck, a memory error detector
==478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==478== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==478== Command: ./test -r xml "List::merge\ #2"
==478== 
==478== 
==478== HEAP SUMMARY:
==478==     in use at exit: 0 bytes in 0 blocks
==478==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==478== 
==478== All heap blocks were freed -- no leaks are possible
==478== 
==478== For counts of detected and suppressed errors, rerun with: -v
==478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==480== Memcheck, a memory error detector
==480== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==480== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==480== Command: ./test -r xml "List::sort\ simple\ #3"
==480== 
==480== 
==480== HEAP SUMMARY:
==480==     in use at exit: 0 bytes in 0 blocks
==480==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==480== 
==480== All heap blocks were freed -- no leaks are possible
==480== 
==480== For counts of detected and suppressed errors, rerun with: -v
==480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==483== Memcheck, a memory error detector
==483== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==483== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==483== Command: ./test -r xml "List::insert\ contents\ #2"
==483== 
==483== 
==483== HEAP SUMMARY:
==483==     in use at exit: 0 bytes in 0 blocks
==483==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==483== 
==483== All heap blocks were freed -- no leaks are possible
==483== 
==483== For counts of detected and suppressed errors, rerun with: -v
==483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==486== Memcheck, a memory error detector
==486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==486== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==486== Command: ./test -r xml "List::split\ edge\ cases"
==486== 
==486== 
==486== HEAP SUMMARY:
==486==     in use at exit: 0 bytes in 0 blocks
==486==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==486== 
==486== All heap blocks were freed -- no leaks are possible
==486== 
==486== For counts of detected and suppressed errors, rerun with: -v
==486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==488== Memcheck, a memory error detector
==488== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==488== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==488== Command: ./test -r xml "List::waterfall\ simple"
==488== 
==488== 
==488== HEAP SUMMARY:
==488==     in use at exit: 0 bytes in 0 blocks
==488==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==488== 
==488== All heap blocks were freed -- no leaks are possible
==488== 
==488== For counts of detected and suppressed errors, rerun with: -v
==488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **09c023a87d58c6dae6a40d569769981773ff047f** (from **February 27th 2019, 12:05:00 am**)
