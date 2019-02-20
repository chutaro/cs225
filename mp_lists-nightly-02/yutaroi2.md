


## Score: 54/114 (47.37%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==31168== Memcheck, a memory error detector
==31168== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31168== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31168== Command: ./test -r xml "List::insertFront\ size"
==31168== 
==31168== 
==31168== HEAP SUMMARY:
==31168==     in use at exit: 0 bytes in 0 blocks
==31168==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==31168== 
==31168== All heap blocks were freed -- no leaks are possible
==31168== 
==31168== For counts of detected and suppressed errors, rerun with: -v
==31168== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31170== Memcheck, a memory error detector
==31170== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31170== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31170== Command: ./test -r xml "List::insertBack\ size"
==31170== 
==31170== 
==31170== HEAP SUMMARY:
==31170==     in use at exit: 0 bytes in 0 blocks
==31170==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==31170== 
==31170== All heap blocks were freed -- no leaks are possible
==31170== 
==31170== For counts of detected and suppressed errors, rerun with: -v
==31170== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31173== Memcheck, a memory error detector
==31173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31173== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31173== Command: ./test -r xml "List::insert\ contents"
==31173== 
==31173== 
==31173== HEAP SUMMARY:
==31173==     in use at exit: 0 bytes in 0 blocks
==31173==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==31173== 
==31173== All heap blocks were freed -- no leaks are possible
==31173== 
==31173== For counts of detected and suppressed errors, rerun with: -v
==31173== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31190== Memcheck, a memory error detector
==31190== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31190== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31190== Command: ./test -r xml "List::split\ simple"
==31190== 
==31190== 
==31190== HEAP SUMMARY:
==31190==     in use at exit: 0 bytes in 0 blocks
==31190==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==31190== 
==31190== All heap blocks were freed -- no leaks are possible
==31190== 
==31190== For counts of detected and suppressed errors, rerun with: -v
==31190== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31193== Memcheck, a memory error detector
==31193== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31193== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31193== Command: ./test -r xml "List::_destroy\ empty\ list"
==31193== 
==31193== 
==31193== HEAP SUMMARY:
==31193==     in use at exit: 0 bytes in 0 blocks
==31193==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==31193== 
==31193== All heap blocks were freed -- no leaks are possible
==31193== 
==31193== For counts of detected and suppressed errors, rerun with: -v
==31193== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31197== Memcheck, a memory error detector
==31197== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31197== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31197== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==31197== 
==31197== 
==31197== HEAP SUMMARY:
==31197==     in use at exit: 0 bytes in 0 blocks
==31197==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==31197== 
==31197== All heap blocks were freed -- no leaks are possible
==31197== 
==31197== For counts of detected and suppressed errors, rerun with: -v
==31197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31199== Memcheck, a memory error detector
==31199== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31199== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31199== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==31199== 
==31199== 
==31199== HEAP SUMMARY:
==31199==     in use at exit: 0 bytes in 0 blocks
==31199==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==31199== 
==31199== All heap blocks were freed -- no leaks are possible
==31199== 
==31199== For counts of detected and suppressed errors, rerun with: -v
==31199== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31201== Memcheck, a memory error detector
==31201== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31201== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31201== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==31201== 
==31201== 
==31201== HEAP SUMMARY:
==31201==     in use at exit: 0 bytes in 0 blocks
==31201==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==31201== 
==31201== All heap blocks were freed -- no leaks are possible
==31201== 
==31201== For counts of detected and suppressed errors, rerun with: -v
==31201== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31203== Memcheck, a memory error detector
==31203== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31203== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31203== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31203== 
==31203== 
==31203== HEAP SUMMARY:
==31203==     in use at exit: 0 bytes in 0 blocks
==31203==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==31203== 
==31203== All heap blocks were freed -- no leaks are possible
==31203== 
==31203== For counts of detected and suppressed errors, rerun with: -v
==31203== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31205== Memcheck, a memory error detector
==31205== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31205== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31205== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==31205== 
==31205== 
==31205== HEAP SUMMARY:
==31205==     in use at exit: 0 bytes in 0 blocks
==31205==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==31205== 
==31205== All heap blocks were freed -- no leaks are possible
==31205== 
==31205== For counts of detected and suppressed errors, rerun with: -v
==31205== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31207== Memcheck, a memory error detector
==31207== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31207== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31207== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31207== 
==31207== 
==31207== HEAP SUMMARY:
==31207==     in use at exit: 0 bytes in 0 blocks
==31207==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==31207== 
==31207== All heap blocks were freed -- no leaks are possible
==31207== 
==31207== For counts of detected and suppressed errors, rerun with: -v
==31207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31209== Memcheck, a memory error detector
==31209== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31209== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31209== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==31209== 
==31209== 
==31209== HEAP SUMMARY:
==31209==     in use at exit: 0 bytes in 0 blocks
==31209==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==31209== 
==31209== All heap blocks were freed -- no leaks are possible
==31209== 
==31209== For counts of detected and suppressed errors, rerun with: -v
==31209== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31211== Memcheck, a memory error detector
==31211== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31211== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31211== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==31211== 
==31211== 
==31211== HEAP SUMMARY:
==31211==     in use at exit: 0 bytes in 0 blocks
==31211==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==31211== 
==31211== All heap blocks were freed -- no leaks are possible
==31211== 
==31211== For counts of detected and suppressed errors, rerun with: -v
==31211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==31214== Memcheck, a memory error detector
==31214== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31214== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31214== Command: ./test -r xml "List::reverse\ edge\ cases"
==31214== 
==31214== 
==31214== HEAP SUMMARY:
==31214==     in use at exit: 0 bytes in 0 blocks
==31214==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==31214== 
==31214== All heap blocks were freed -- no leaks are possible
==31214== 
==31214== For counts of detected and suppressed errors, rerun with: -v
==31214== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==31219== Memcheck, a memory error detector
==31219== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31219== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31219== Command: ./test -r xml "List::insert\ contents\ #2"
==31219== 
==31219== 
==31219== HEAP SUMMARY:
==31219==     in use at exit: 0 bytes in 0 blocks
==31219==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==31219== 
==31219== All heap blocks were freed -- no leaks are possible
==31219== 
==31219== For counts of detected and suppressed errors, rerun with: -v
==31219== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31222== Memcheck, a memory error detector
==31222== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31222== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31222== Command: ./test -r xml "List::waterfall\ simple"
==31222== 
==31222== 
==31222== HEAP SUMMARY:
==31222==     in use at exit: 0 bytes in 0 blocks
==31222==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==31222== 
==31222== All heap blocks were freed -- no leaks are possible
==31222== 
==31222== For counts of detected and suppressed errors, rerun with: -v
==31222== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
