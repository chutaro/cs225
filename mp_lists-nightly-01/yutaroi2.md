


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
==26322== Memcheck, a memory error detector
==26322== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26322== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26322== Command: ./test -r xml "List::insertFront\ size"
==26322== 
==26322== 
==26322== HEAP SUMMARY:
==26322==     in use at exit: 0 bytes in 0 blocks
==26322==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26322== 
==26322== All heap blocks were freed -- no leaks are possible
==26322== 
==26322== For counts of detected and suppressed errors, rerun with: -v
==26322== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26324== Memcheck, a memory error detector
==26324== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26324== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26324== Command: ./test -r xml "List::insertBack\ size"
==26324== 
==26324== 
==26324== HEAP SUMMARY:
==26324==     in use at exit: 0 bytes in 0 blocks
==26324==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26324== 
==26324== All heap blocks were freed -- no leaks are possible
==26324== 
==26324== For counts of detected and suppressed errors, rerun with: -v
==26324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26326== Memcheck, a memory error detector
==26326== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26326== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26326== Command: ./test -r xml "List::insert\ contents"
==26326== 
==26326== 
==26326== HEAP SUMMARY:
==26326==     in use at exit: 0 bytes in 0 blocks
==26326==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==26326== 
==26326== All heap blocks were freed -- no leaks are possible
==26326== 
==26326== For counts of detected and suppressed errors, rerun with: -v
==26326== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26332== Memcheck, a memory error detector
==26332== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26332== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26332== Command: ./test -r xml "List::split\ simple"
==26332== 
==26332== 
==26332== HEAP SUMMARY:
==26332==     in use at exit: 0 bytes in 0 blocks
==26332==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==26332== 
==26332== All heap blocks were freed -- no leaks are possible
==26332== 
==26332== For counts of detected and suppressed errors, rerun with: -v
==26332== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26353== Memcheck, a memory error detector
==26353== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26353== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26353== Command: ./test -r xml "List::_destroy\ empty\ list"
==26353== 
==26353== 
==26353== HEAP SUMMARY:
==26353==     in use at exit: 0 bytes in 0 blocks
==26353==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==26353== 
==26353== All heap blocks were freed -- no leaks are possible
==26353== 
==26353== For counts of detected and suppressed errors, rerun with: -v
==26353== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26357== Memcheck, a memory error detector
==26357== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26357== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26357== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==26357== 
==26357== 
==26357== HEAP SUMMARY:
==26357==     in use at exit: 0 bytes in 0 blocks
==26357==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26357== 
==26357== All heap blocks were freed -- no leaks are possible
==26357== 
==26357== For counts of detected and suppressed errors, rerun with: -v
==26357== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26362== Memcheck, a memory error detector
==26362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26362== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26362== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==26362== 
==26362== 
==26362== HEAP SUMMARY:
==26362==     in use at exit: 0 bytes in 0 blocks
==26362==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26362== 
==26362== All heap blocks were freed -- no leaks are possible
==26362== 
==26362== For counts of detected and suppressed errors, rerun with: -v
==26362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26366== Memcheck, a memory error detector
==26366== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26366== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26366== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==26366== 
==26366== 
==26366== HEAP SUMMARY:
==26366==     in use at exit: 0 bytes in 0 blocks
==26366==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26366== 
==26366== All heap blocks were freed -- no leaks are possible
==26366== 
==26366== For counts of detected and suppressed errors, rerun with: -v
==26366== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26374== Memcheck, a memory error detector
==26374== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26374== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26374== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26374== 
==26374== 
==26374== HEAP SUMMARY:
==26374==     in use at exit: 0 bytes in 0 blocks
==26374==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26374== 
==26374== All heap blocks were freed -- no leaks are possible
==26374== 
==26374== For counts of detected and suppressed errors, rerun with: -v
==26374== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26378== Memcheck, a memory error detector
==26378== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26378== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26378== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==26378== 
==26378== 
==26378== HEAP SUMMARY:
==26378==     in use at exit: 0 bytes in 0 blocks
==26378==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26378== 
==26378== All heap blocks were freed -- no leaks are possible
==26378== 
==26378== For counts of detected and suppressed errors, rerun with: -v
==26378== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26391== Memcheck, a memory error detector
==26391== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26391== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26391== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26391== 
==26391== 
==26391== HEAP SUMMARY:
==26391==     in use at exit: 0 bytes in 0 blocks
==26391==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26391== 
==26391== All heap blocks were freed -- no leaks are possible
==26391== 
==26391== For counts of detected and suppressed errors, rerun with: -v
==26391== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26405== Memcheck, a memory error detector
==26405== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26405== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26405== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==26405== 
==26405== 
==26405== HEAP SUMMARY:
==26405==     in use at exit: 0 bytes in 0 blocks
==26405==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==26405== 
==26405== All heap blocks were freed -- no leaks are possible
==26405== 
==26405== For counts of detected and suppressed errors, rerun with: -v
==26405== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26412== Memcheck, a memory error detector
==26412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26412== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26412== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==26412== 
==26412== 
==26412== HEAP SUMMARY:
==26412==     in use at exit: 0 bytes in 0 blocks
==26412==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==26412== 
==26412== All heap blocks were freed -- no leaks are possible
==26412== 
==26412== For counts of detected and suppressed errors, rerun with: -v
==26412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26418== Memcheck, a memory error detector
==26418== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26418== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26418== Command: ./test -r xml "List::reverse\ edge\ cases"
==26418== 
==26418== 
==26418== HEAP SUMMARY:
==26418==     in use at exit: 0 bytes in 0 blocks
==26418==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==26418== 
==26418== All heap blocks were freed -- no leaks are possible
==26418== 
==26418== For counts of detected and suppressed errors, rerun with: -v
==26418== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26428== Memcheck, a memory error detector
==26428== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26428== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26428== Command: ./test -r xml "List::insert\ contents\ #2"
==26428== 
==26428== 
==26428== HEAP SUMMARY:
==26428==     in use at exit: 0 bytes in 0 blocks
==26428==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==26428== 
==26428== All heap blocks were freed -- no leaks are possible
==26428== 
==26428== For counts of detected and suppressed errors, rerun with: -v
==26428== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26431== Memcheck, a memory error detector
==26431== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26431== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26431== Command: ./test -r xml "List::waterfall\ simple"
==26431== 
==26431== 
==26431== HEAP SUMMARY:
==26431==     in use at exit: 0 bytes in 0 blocks
==26431==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==26431== 
==26431== All heap blocks were freed -- no leaks are possible
==26431== 
==26431== For counts of detected and suppressed errors, rerun with: -v
==26431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
