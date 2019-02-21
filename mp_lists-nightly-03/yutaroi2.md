


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
==10992== Memcheck, a memory error detector
==10992== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10992== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10992== Command: ./test -r xml "List::insertFront\ size"
==10992== 
==10992== 
==10992== HEAP SUMMARY:
==10992==     in use at exit: 0 bytes in 0 blocks
==10992==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10992== 
==10992== All heap blocks were freed -- no leaks are possible
==10992== 
==10992== For counts of detected and suppressed errors, rerun with: -v
==10992== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10998== Memcheck, a memory error detector
==10998== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10998== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10998== Command: ./test -r xml "List::insertBack\ size"
==10998== 
==10998== 
==10998== HEAP SUMMARY:
==10998==     in use at exit: 0 bytes in 0 blocks
==10998==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10998== 
==10998== All heap blocks were freed -- no leaks are possible
==10998== 
==10998== For counts of detected and suppressed errors, rerun with: -v
==10998== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11004== Memcheck, a memory error detector
==11004== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11004== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11004== Command: ./test -r xml "List::insert\ contents"
==11004== 
==11004== 
==11004== HEAP SUMMARY:
==11004==     in use at exit: 0 bytes in 0 blocks
==11004==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==11004== 
==11004== All heap blocks were freed -- no leaks are possible
==11004== 
==11004== For counts of detected and suppressed errors, rerun with: -v
==11004== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11011== Memcheck, a memory error detector
==11011== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11011== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11011== Command: ./test -r xml "List::split\ simple"
==11011== 
==11011== 
==11011== HEAP SUMMARY:
==11011==     in use at exit: 0 bytes in 0 blocks
==11011==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==11011== 
==11011== All heap blocks were freed -- no leaks are possible
==11011== 
==11011== For counts of detected and suppressed errors, rerun with: -v
==11011== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11014== Memcheck, a memory error detector
==11014== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11014== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11014== Command: ./test -r xml "List::_destroy\ empty\ list"
==11014== 
==11014== 
==11014== HEAP SUMMARY:
==11014==     in use at exit: 0 bytes in 0 blocks
==11014==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==11014== 
==11014== All heap blocks were freed -- no leaks are possible
==11014== 
==11014== For counts of detected and suppressed errors, rerun with: -v
==11014== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11016== Memcheck, a memory error detector
==11016== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11016== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11016== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==11016== 
==11016== 
==11016== HEAP SUMMARY:
==11016==     in use at exit: 0 bytes in 0 blocks
==11016==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==11016== 
==11016== All heap blocks were freed -- no leaks are possible
==11016== 
==11016== For counts of detected and suppressed errors, rerun with: -v
==11016== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11018== Memcheck, a memory error detector
==11018== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11018== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11018== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==11018== 
==11018== 
==11018== HEAP SUMMARY:
==11018==     in use at exit: 0 bytes in 0 blocks
==11018==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==11018== 
==11018== All heap blocks were freed -- no leaks are possible
==11018== 
==11018== For counts of detected and suppressed errors, rerun with: -v
==11018== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11026== Memcheck, a memory error detector
==11026== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11026== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11026== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==11026== 
==11026== 
==11026== HEAP SUMMARY:
==11026==     in use at exit: 0 bytes in 0 blocks
==11026==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==11026== 
==11026== All heap blocks were freed -- no leaks are possible
==11026== 
==11026== For counts of detected and suppressed errors, rerun with: -v
==11026== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11033== Memcheck, a memory error detector
==11033== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11033== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11033== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==11033== 
==11033== 
==11033== HEAP SUMMARY:
==11033==     in use at exit: 0 bytes in 0 blocks
==11033==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==11033== 
==11033== All heap blocks were freed -- no leaks are possible
==11033== 
==11033== For counts of detected and suppressed errors, rerun with: -v
==11033== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11065== Memcheck, a memory error detector
==11065== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11065== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11065== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==11065== 
==11065== 
==11065== HEAP SUMMARY:
==11065==     in use at exit: 0 bytes in 0 blocks
==11065==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==11065== 
==11065== All heap blocks were freed -- no leaks are possible
==11065== 
==11065== For counts of detected and suppressed errors, rerun with: -v
==11065== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11072== Memcheck, a memory error detector
==11072== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11072== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11072== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==11072== 
==11072== 
==11072== HEAP SUMMARY:
==11072==     in use at exit: 0 bytes in 0 blocks
==11072==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==11072== 
==11072== All heap blocks were freed -- no leaks are possible
==11072== 
==11072== For counts of detected and suppressed errors, rerun with: -v
==11072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11076== Memcheck, a memory error detector
==11076== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11076== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11076== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==11076== 
==11076== 
==11076== HEAP SUMMARY:
==11076==     in use at exit: 0 bytes in 0 blocks
==11076==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==11076== 
==11076== All heap blocks were freed -- no leaks are possible
==11076== 
==11076== For counts of detected and suppressed errors, rerun with: -v
==11076== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11111== Memcheck, a memory error detector
==11111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11111== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11111== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==11111== 
==11111== 
==11111== HEAP SUMMARY:
==11111==     in use at exit: 0 bytes in 0 blocks
==11111==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==11111== 
==11111== All heap blocks were freed -- no leaks are possible
==11111== 
==11111== For counts of detected and suppressed errors, rerun with: -v
==11111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11122== Memcheck, a memory error detector
==11122== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11122== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11122== Command: ./test -r xml "List::reverse\ edge\ cases"
==11122== 
==11122== 
==11122== HEAP SUMMARY:
==11122==     in use at exit: 0 bytes in 0 blocks
==11122==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==11122== 
==11122== All heap blocks were freed -- no leaks are possible
==11122== 
==11122== For counts of detected and suppressed errors, rerun with: -v
==11122== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11142== Memcheck, a memory error detector
==11142== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11142== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11142== Command: ./test -r xml "List::insert\ contents\ #2"
==11142== 
==11142== 
==11142== HEAP SUMMARY:
==11142==     in use at exit: 0 bytes in 0 blocks
==11142==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==11142== 
==11142== All heap blocks were freed -- no leaks are possible
==11142== 
==11142== For counts of detected and suppressed errors, rerun with: -v
==11142== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11154== Memcheck, a memory error detector
==11154== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11154== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11154== Command: ./test -r xml "List::waterfall\ simple"
==11154== 
==11154== 
==11154== HEAP SUMMARY:
==11154==     in use at exit: 0 bytes in 0 blocks
==11154==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==11154== 
==11154== All heap blocks were freed -- no leaks are possible
==11154== 
==11154== For counts of detected and suppressed errors, rerun with: -v
==11154== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 21st 2019, 12:05:00 am**)
