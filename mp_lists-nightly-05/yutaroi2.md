


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
==6860== Memcheck, a memory error detector
==6860== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6860== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6860== Command: ./test -r xml "List::insertFront\ size"
==6860== 
==6860== 
==6860== HEAP SUMMARY:
==6860==     in use at exit: 0 bytes in 0 blocks
==6860==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==6860== 
==6860== All heap blocks were freed -- no leaks are possible
==6860== 
==6860== For counts of detected and suppressed errors, rerun with: -v
==6860== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6866== Memcheck, a memory error detector
==6866== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6866== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6866== Command: ./test -r xml "List::insertBack\ size"
==6866== 
==6866== 
==6866== HEAP SUMMARY:
==6866==     in use at exit: 0 bytes in 0 blocks
==6866==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==6866== 
==6866== All heap blocks were freed -- no leaks are possible
==6866== 
==6866== For counts of detected and suppressed errors, rerun with: -v
==6866== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6950== Memcheck, a memory error detector
==6950== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6950== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6950== Command: ./test -r xml "List::insert\ contents"
==6950== 
==6950== 
==6950== HEAP SUMMARY:
==6950==     in use at exit: 0 bytes in 0 blocks
==6950==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==6950== 
==6950== All heap blocks were freed -- no leaks are possible
==6950== 
==6950== For counts of detected and suppressed errors, rerun with: -v
==6950== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6966== Memcheck, a memory error detector
==6966== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6966== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6966== Command: ./test -r xml "List::split\ simple"
==6966== 
==6966== 
==6966== HEAP SUMMARY:
==6966==     in use at exit: 0 bytes in 0 blocks
==6966==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==6966== 
==6966== All heap blocks were freed -- no leaks are possible
==6966== 
==6966== For counts of detected and suppressed errors, rerun with: -v
==6966== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6975== Memcheck, a memory error detector
==6975== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6975== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6975== Command: ./test -r xml "List::_destroy\ empty\ list"
==6975== 
==6975== 
==6975== HEAP SUMMARY:
==6975==     in use at exit: 0 bytes in 0 blocks
==6975==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==6975== 
==6975== All heap blocks were freed -- no leaks are possible
==6975== 
==6975== For counts of detected and suppressed errors, rerun with: -v
==6975== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6980== Memcheck, a memory error detector
==6980== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6980== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6980== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==6980== 
==6980== 
==6980== HEAP SUMMARY:
==6980==     in use at exit: 0 bytes in 0 blocks
==6980==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==6980== 
==6980== All heap blocks were freed -- no leaks are possible
==6980== 
==6980== For counts of detected and suppressed errors, rerun with: -v
==6980== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6984== Memcheck, a memory error detector
==6984== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6984== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6984== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==6984== 
==6984== 
==6984== HEAP SUMMARY:
==6984==     in use at exit: 0 bytes in 0 blocks
==6984==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==6984== 
==6984== All heap blocks were freed -- no leaks are possible
==6984== 
==6984== For counts of detected and suppressed errors, rerun with: -v
==6984== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6988== Memcheck, a memory error detector
==6988== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6988== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6988== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==6988== 
==6988== 
==6988== HEAP SUMMARY:
==6988==     in use at exit: 0 bytes in 0 blocks
==6988==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==6988== 
==6988== All heap blocks were freed -- no leaks are possible
==6988== 
==6988== For counts of detected and suppressed errors, rerun with: -v
==6988== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6996== Memcheck, a memory error detector
==6996== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6996== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6996== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6996== 
==6996== 
==6996== HEAP SUMMARY:
==6996==     in use at exit: 0 bytes in 0 blocks
==6996==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==6996== 
==6996== All heap blocks were freed -- no leaks are possible
==6996== 
==6996== For counts of detected and suppressed errors, rerun with: -v
==6996== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7008== Memcheck, a memory error detector
==7008== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7008== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7008== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==7008== 
==7008== 
==7008== HEAP SUMMARY:
==7008==     in use at exit: 0 bytes in 0 blocks
==7008==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==7008== 
==7008== All heap blocks were freed -- no leaks are possible
==7008== 
==7008== For counts of detected and suppressed errors, rerun with: -v
==7008== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7043== Memcheck, a memory error detector
==7043== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7043== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7043== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7043== 
==7043== 
==7043== HEAP SUMMARY:
==7043==     in use at exit: 0 bytes in 0 blocks
==7043==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==7043== 
==7043== All heap blocks were freed -- no leaks are possible
==7043== 
==7043== For counts of detected and suppressed errors, rerun with: -v
==7043== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7084== Memcheck, a memory error detector
==7084== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7084== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7084== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==7084== 
==7084== 
==7084== HEAP SUMMARY:
==7084==     in use at exit: 0 bytes in 0 blocks
==7084==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==7084== 
==7084== All heap blocks were freed -- no leaks are possible
==7084== 
==7084== For counts of detected and suppressed errors, rerun with: -v
==7084== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7239== Memcheck, a memory error detector
==7239== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7239== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7239== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==7239== 
==7239== 
==7239== HEAP SUMMARY:
==7239==     in use at exit: 0 bytes in 0 blocks
==7239==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==7239== 
==7239== All heap blocks were freed -- no leaks are possible
==7239== 
==7239== For counts of detected and suppressed errors, rerun with: -v
==7239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7302== Memcheck, a memory error detector
==7302== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7302== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7302== Command: ./test -r xml "List::reverse\ edge\ cases"
==7302== 
==7302== 
==7302== HEAP SUMMARY:
==7302==     in use at exit: 0 bytes in 0 blocks
==7302==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==7302== 
==7302== All heap blocks were freed -- no leaks are possible
==7302== 
==7302== For counts of detected and suppressed errors, rerun with: -v
==7302== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7307== Memcheck, a memory error detector
==7307== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7307== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7307== Command: ./test -r xml "List::insert\ contents\ #2"
==7307== 
==7307== 
==7307== HEAP SUMMARY:
==7307==     in use at exit: 0 bytes in 0 blocks
==7307==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==7307== 
==7307== All heap blocks were freed -- no leaks are possible
==7307== 
==7307== For counts of detected and suppressed errors, rerun with: -v
==7307== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7312== Memcheck, a memory error detector
==7312== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7312== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7312== Command: ./test -r xml "List::waterfall\ simple"
==7312== 
==7312== 
==7312== HEAP SUMMARY:
==7312==     in use at exit: 0 bytes in 0 blocks
==7312==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==7312== 
==7312== All heap blocks were freed -- no leaks are possible
==7312== 
==7312== For counts of detected and suppressed errors, rerun with: -v
==7312== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
