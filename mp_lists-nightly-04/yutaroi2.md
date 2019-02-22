


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
==2926== Memcheck, a memory error detector
==2926== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2926== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2926== Command: ./test -r xml "List::insertFront\ size"
==2926== 
==2926== 
==2926== HEAP SUMMARY:
==2926==     in use at exit: 0 bytes in 0 blocks
==2926==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==2926== 
==2926== All heap blocks were freed -- no leaks are possible
==2926== 
==2926== For counts of detected and suppressed errors, rerun with: -v
==2926== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2929== Memcheck, a memory error detector
==2929== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2929== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2929== Command: ./test -r xml "List::insertBack\ size"
==2929== 
==2929== 
==2929== HEAP SUMMARY:
==2929==     in use at exit: 0 bytes in 0 blocks
==2929==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==2929== 
==2929== All heap blocks were freed -- no leaks are possible
==2929== 
==2929== For counts of detected and suppressed errors, rerun with: -v
==2929== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2933== Memcheck, a memory error detector
==2933== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2933== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2933== Command: ./test -r xml "List::insert\ contents"
==2933== 
==2933== 
==2933== HEAP SUMMARY:
==2933==     in use at exit: 0 bytes in 0 blocks
==2933==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==2933== 
==2933== All heap blocks were freed -- no leaks are possible
==2933== 
==2933== For counts of detected and suppressed errors, rerun with: -v
==2933== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2939== Memcheck, a memory error detector
==2939== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2939== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2939== Command: ./test -r xml "List::split\ simple"
==2939== 
==2939== 
==2939== HEAP SUMMARY:
==2939==     in use at exit: 0 bytes in 0 blocks
==2939==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==2939== 
==2939== All heap blocks were freed -- no leaks are possible
==2939== 
==2939== For counts of detected and suppressed errors, rerun with: -v
==2939== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2946== Memcheck, a memory error detector
==2946== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2946== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2946== Command: ./test -r xml "List::_destroy\ empty\ list"
==2946== 
==2946== 
==2946== HEAP SUMMARY:
==2946==     in use at exit: 0 bytes in 0 blocks
==2946==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==2946== 
==2946== All heap blocks were freed -- no leaks are possible
==2946== 
==2946== For counts of detected and suppressed errors, rerun with: -v
==2946== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2950== Memcheck, a memory error detector
==2950== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2950== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2950== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==2950== 
==2950== 
==2950== HEAP SUMMARY:
==2950==     in use at exit: 0 bytes in 0 blocks
==2950==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==2950== 
==2950== All heap blocks were freed -- no leaks are possible
==2950== 
==2950== For counts of detected and suppressed errors, rerun with: -v
==2950== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2954== Memcheck, a memory error detector
==2954== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2954== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2954== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==2954== 
==2954== 
==2954== HEAP SUMMARY:
==2954==     in use at exit: 0 bytes in 0 blocks
==2954==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==2954== 
==2954== All heap blocks were freed -- no leaks are possible
==2954== 
==2954== For counts of detected and suppressed errors, rerun with: -v
==2954== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2958== Memcheck, a memory error detector
==2958== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2958== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2958== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==2958== 
==2958== 
==2958== HEAP SUMMARY:
==2958==     in use at exit: 0 bytes in 0 blocks
==2958==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==2958== 
==2958== All heap blocks were freed -- no leaks are possible
==2958== 
==2958== For counts of detected and suppressed errors, rerun with: -v
==2958== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2962== Memcheck, a memory error detector
==2962== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2962== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2962== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==2962== 
==2962== 
==2962== HEAP SUMMARY:
==2962==     in use at exit: 0 bytes in 0 blocks
==2962==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==2962== 
==2962== All heap blocks were freed -- no leaks are possible
==2962== 
==2962== For counts of detected and suppressed errors, rerun with: -v
==2962== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2966== Memcheck, a memory error detector
==2966== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2966== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2966== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==2966== 
==2966== 
==2966== HEAP SUMMARY:
==2966==     in use at exit: 0 bytes in 0 blocks
==2966==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==2966== 
==2966== All heap blocks were freed -- no leaks are possible
==2966== 
==2966== For counts of detected and suppressed errors, rerun with: -v
==2966== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2970== Memcheck, a memory error detector
==2970== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2970== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2970== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==2970== 
==2970== 
==2970== HEAP SUMMARY:
==2970==     in use at exit: 0 bytes in 0 blocks
==2970==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==2970== 
==2970== All heap blocks were freed -- no leaks are possible
==2970== 
==2970== For counts of detected and suppressed errors, rerun with: -v
==2970== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2974== Memcheck, a memory error detector
==2974== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2974== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2974== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==2974== 
==2974== 
==2974== HEAP SUMMARY:
==2974==     in use at exit: 0 bytes in 0 blocks
==2974==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==2974== 
==2974== All heap blocks were freed -- no leaks are possible
==2974== 
==2974== For counts of detected and suppressed errors, rerun with: -v
==2974== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2978== Memcheck, a memory error detector
==2978== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2978== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2978== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==2978== 
==2978== 
==2978== HEAP SUMMARY:
==2978==     in use at exit: 0 bytes in 0 blocks
==2978==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==2978== 
==2978== All heap blocks were freed -- no leaks are possible
==2978== 
==2978== For counts of detected and suppressed errors, rerun with: -v
==2978== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2983== Memcheck, a memory error detector
==2983== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2983== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2983== Command: ./test -r xml "List::reverse\ edge\ cases"
==2983== 
==2983== 
==2983== HEAP SUMMARY:
==2983==     in use at exit: 0 bytes in 0 blocks
==2983==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==2983== 
==2983== All heap blocks were freed -- no leaks are possible
==2983== 
==2983== For counts of detected and suppressed errors, rerun with: -v
==2983== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2992== Memcheck, a memory error detector
==2992== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2992== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2992== Command: ./test -r xml "List::insert\ contents\ #2"
==2992== 
==2992== 
==2992== HEAP SUMMARY:
==2992==     in use at exit: 0 bytes in 0 blocks
==2992==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==2992== 
==2992== All heap blocks were freed -- no leaks are possible
==2992== 
==2992== For counts of detected and suppressed errors, rerun with: -v
==2992== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3011== Memcheck, a memory error detector
==3011== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3011== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3011== Command: ./test -r xml "List::waterfall\ simple"
==3011== 
==3011== 
==3011== HEAP SUMMARY:
==3011==     in use at exit: 0 bytes in 0 blocks
==3011==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==3011== 
==3011== All heap blocks were freed -- no leaks are possible
==3011== 
==3011== For counts of detected and suppressed errors, rerun with: -v
==3011== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 22nd 2019, 12:05:00 am**)
