


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
==8436== Memcheck, a memory error detector
==8436== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8436== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8436== Command: ./test -r xml "List::merge"
==8436== 
==8436== 
==8436== HEAP SUMMARY:
==8436==     in use at exit: 0 bytes in 0 blocks
==8436==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==8436== 
==8436== All heap blocks were freed -- no leaks are possible
==8436== 
==8436== For counts of detected and suppressed errors, rerun with: -v
==8436== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8459== Memcheck, a memory error detector
==8459== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8459== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8459== Command: ./test -r xml "List::sort\ simple\ #1"
==8459== 
==8459== 
==8459== HEAP SUMMARY:
==8459==     in use at exit: 0 bytes in 0 blocks
==8459==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==8459== 
==8459== All heap blocks were freed -- no leaks are possible
==8459== 
==8459== For counts of detected and suppressed errors, rerun with: -v
==8459== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8464== Memcheck, a memory error detector
==8464== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8464== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8464== Command: ./test -r xml "List::sort\ simple\ #2"
==8464== 
==8464== 
==8464== HEAP SUMMARY:
==8464==     in use at exit: 0 bytes in 0 blocks
==8464==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==8464== 
==8464== All heap blocks were freed -- no leaks are possible
==8464== 
==8464== For counts of detected and suppressed errors, rerun with: -v
==8464== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8477== Memcheck, a memory error detector
==8477== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8477== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8477== Command: ./test -r xml "List::insertFront\ size"
==8477== 
==8477== 
==8477== HEAP SUMMARY:
==8477==     in use at exit: 0 bytes in 0 blocks
==8477==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==8477== 
==8477== All heap blocks were freed -- no leaks are possible
==8477== 
==8477== For counts of detected and suppressed errors, rerun with: -v
==8477== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8480== Memcheck, a memory error detector
==8480== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8480== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8480== Command: ./test -r xml "List::insertBack\ size"
==8480== 
==8480== 
==8480== HEAP SUMMARY:
==8480==     in use at exit: 0 bytes in 0 blocks
==8480==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==8480== 
==8480== All heap blocks were freed -- no leaks are possible
==8480== 
==8480== For counts of detected and suppressed errors, rerun with: -v
==8480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8489== Memcheck, a memory error detector
==8489== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8489== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8489== Command: ./test -r xml "List::insert\ contents"
==8489== 
==8489== 
==8489== HEAP SUMMARY:
==8489==     in use at exit: 0 bytes in 0 blocks
==8489==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==8489== 
==8489== All heap blocks were freed -- no leaks are possible
==8489== 
==8489== For counts of detected and suppressed errors, rerun with: -v
==8489== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8504== Memcheck, a memory error detector
==8504== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8504== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8504== Command: ./test -r xml "List::split\ simple"
==8504== 
==8504== 
==8504== HEAP SUMMARY:
==8504==     in use at exit: 0 bytes in 0 blocks
==8504==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==8504== 
==8504== All heap blocks were freed -- no leaks are possible
==8504== 
==8504== For counts of detected and suppressed errors, rerun with: -v
==8504== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8510== Memcheck, a memory error detector
==8510== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8510== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8510== Command: ./test -r xml "List::_destroy\ empty\ list"
==8510== 
==8510== 
==8510== HEAP SUMMARY:
==8510==     in use at exit: 0 bytes in 0 blocks
==8510==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==8510== 
==8510== All heap blocks were freed -- no leaks are possible
==8510== 
==8510== For counts of detected and suppressed errors, rerun with: -v
==8510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8515== Memcheck, a memory error detector
==8515== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8515== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8515== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==8515== 
==8515== 
==8515== HEAP SUMMARY:
==8515==     in use at exit: 0 bytes in 0 blocks
==8515==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==8515== 
==8515== All heap blocks were freed -- no leaks are possible
==8515== 
==8515== For counts of detected and suppressed errors, rerun with: -v
==8515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8523== Memcheck, a memory error detector
==8523== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8523== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8523== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==8523== 
==8523== 
==8523== HEAP SUMMARY:
==8523==     in use at exit: 0 bytes in 0 blocks
==8523==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==8523== 
==8523== All heap blocks were freed -- no leaks are possible
==8523== 
==8523== For counts of detected and suppressed errors, rerun with: -v
==8523== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8527== Memcheck, a memory error detector
==8527== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8527== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8527== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==8527== 
==8527== 
==8527== HEAP SUMMARY:
==8527==     in use at exit: 0 bytes in 0 blocks
==8527==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==8527== 
==8527== All heap blocks were freed -- no leaks are possible
==8527== 
==8527== For counts of detected and suppressed errors, rerun with: -v
==8527== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8531== Memcheck, a memory error detector
==8531== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8531== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8531== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8531== 
==8531== 
==8531== HEAP SUMMARY:
==8531==     in use at exit: 0 bytes in 0 blocks
==8531==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==8531== 
==8531== All heap blocks were freed -- no leaks are possible
==8531== 
==8531== For counts of detected and suppressed errors, rerun with: -v
==8531== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8538== Memcheck, a memory error detector
==8538== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8538== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8538== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==8538== 
==8538== 
==8538== HEAP SUMMARY:
==8538==     in use at exit: 0 bytes in 0 blocks
==8538==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==8538== 
==8538== All heap blocks were freed -- no leaks are possible
==8538== 
==8538== For counts of detected and suppressed errors, rerun with: -v
==8538== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8545== Memcheck, a memory error detector
==8545== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8545== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8545== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8545== 
==8545== 
==8545== HEAP SUMMARY:
==8545==     in use at exit: 0 bytes in 0 blocks
==8545==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==8545== 
==8545== All heap blocks were freed -- no leaks are possible
==8545== 
==8545== For counts of detected and suppressed errors, rerun with: -v
==8545== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8551== Memcheck, a memory error detector
==8551== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8551== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8551== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==8551== 
==8551== 
==8551== HEAP SUMMARY:
==8551==     in use at exit: 0 bytes in 0 blocks
==8551==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==8551== 
==8551== All heap blocks were freed -- no leaks are possible
==8551== 
==8551== For counts of detected and suppressed errors, rerun with: -v
==8551== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8555== Memcheck, a memory error detector
==8555== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8555== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8555== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==8555== 
==8555== 
==8555== HEAP SUMMARY:
==8555==     in use at exit: 0 bytes in 0 blocks
==8555==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==8555== 
==8555== All heap blocks were freed -- no leaks are possible
==8555== 
==8555== For counts of detected and suppressed errors, rerun with: -v
==8555== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8560== Memcheck, a memory error detector
==8560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8560== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8560== Command: ./test -r xml "List::reverse\ simple"
==8560== 
==8560== 
==8560== HEAP SUMMARY:
==8560==     in use at exit: 0 bytes in 0 blocks
==8560==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==8560== 
==8560== All heap blocks were freed -- no leaks are possible
==8560== 
==8560== For counts of detected and suppressed errors, rerun with: -v
==8560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8566== Memcheck, a memory error detector
==8566== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8566== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8566== Command: ./test -r xml "List::reverse\ edge\ cases"
==8566== 
==8566== 
==8566== HEAP SUMMARY:
==8566==     in use at exit: 0 bytes in 0 blocks
==8566==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==8566== 
==8566== All heap blocks were freed -- no leaks are possible
==8566== 
==8566== For counts of detected and suppressed errors, rerun with: -v
==8566== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8572== Memcheck, a memory error detector
==8572== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8572== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8572== Command: ./test -r xml "List::reverseNth\ #3"
==8572== 
==8572== 
==8572== HEAP SUMMARY:
==8572==     in use at exit: 0 bytes in 0 blocks
==8572==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==8572== 
==8572== All heap blocks were freed -- no leaks are possible
==8572== 
==8572== For counts of detected and suppressed errors, rerun with: -v
==8572== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8576== Memcheck, a memory error detector
==8576== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8576== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8576== Command: ./test -r xml "List::merge\ #2"
==8576== 
==8576== 
==8576== HEAP SUMMARY:
==8576==     in use at exit: 0 bytes in 0 blocks
==8576==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==8576== 
==8576== All heap blocks were freed -- no leaks are possible
==8576== 
==8576== For counts of detected and suppressed errors, rerun with: -v
==8576== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8580== Memcheck, a memory error detector
==8580== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8580== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8580== Command: ./test -r xml "List::sort\ simple\ #3"
==8580== 
==8580== 
==8580== HEAP SUMMARY:
==8580==     in use at exit: 0 bytes in 0 blocks
==8580==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==8580== 
==8580== All heap blocks were freed -- no leaks are possible
==8580== 
==8580== For counts of detected and suppressed errors, rerun with: -v
==8580== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8588== Memcheck, a memory error detector
==8588== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8588== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8588== Command: ./test -r xml "List::insert\ contents\ #2"
==8588== 
==8588== 
==8588== HEAP SUMMARY:
==8588==     in use at exit: 0 bytes in 0 blocks
==8588==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==8588== 
==8588== All heap blocks were freed -- no leaks are possible
==8588== 
==8588== For counts of detected and suppressed errors, rerun with: -v
==8588== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8595== Memcheck, a memory error detector
==8595== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8595== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8595== Command: ./test -r xml "List::split\ edge\ cases"
==8595== 
==8595== 
==8595== HEAP SUMMARY:
==8595==     in use at exit: 0 bytes in 0 blocks
==8595==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==8595== 
==8595== All heap blocks were freed -- no leaks are possible
==8595== 
==8595== For counts of detected and suppressed errors, rerun with: -v
==8595== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8601== Memcheck, a memory error detector
==8601== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8601== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8601== Command: ./test -r xml "List::waterfall\ simple"
==8601== 
==8601== 
==8601== HEAP SUMMARY:
==8601==     in use at exit: 0 bytes in 0 blocks
==8601==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==8601== 
==8601== All heap blocks were freed -- no leaks are possible
==8601== 
==8601== For counts of detected and suppressed errors, rerun with: -v
==8601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
