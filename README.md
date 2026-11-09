# Signals and Systems

## 1. System purpose

- **Problem and real-world context:** TODO
- **Intended user:** TODO
- **What information should your signals communicate?** TODO
- **How does the user interpret and use that information?** TODO

## 2. State table and pattern plan

***N.B.*** The binary representation field describes the state of colored LEDs*. All state changes occur in 100ms time.
*a 1 in a given bit means on, 0 means off. The leftmost bit is the white LED, the next bit is the blue LED, followed in the same fashion by the green, yellow, and red LEDs.

| # | Binary representation | State name |
| --- | --- | --- |
| 1 | 00000 | ZERO |
| 2 | 10000 | ONE |
| 3 | 01000 | TWO |
| 4 | 11000 | THREE |
| 5 | 00100 | FOUR |
| 6 | 10100 | FIVE |
| 7 | 01100 | SIX |
| 8 | 11100 | SEVEN |
| 9 | 00010 | EIGHT |
| 10 | 10010 | NINE |
| 11 | 01010 | TEN |
| 12 | 11010 | ELEVEN |
| 13 | 00110 | TWELVE |
| 14 | 10110 | THIRTEEN |
| 15 | 01110 | FOURTEEN |
| 16 | 11110 | FIFTEEN |
| 17 | 00001 | SIXTEEN |
| 18 | 10001 | SEVENTEEN |
| 19 | 01001 | EIGHTEEN |
| 20 | 11001 | NINETEEN |
| 21 | 00101 | TWENTY |
| 22 | 10101 | TWENTY-ONE |
| 23 | 01101 | TWENTY-TWO |
| 24 | 11101 | TWENTY-THREE |
| 25 | 00011 | TWENTY-FOUR |
| 26 | 10011 | TWENTY-FIVE |
| 27 | 01011 | TWENTY-SIX |
| 28 | 11011 | TWENTY-SEVEN |
| 29 | 00111 | TWENTY-EIGHT |
| 30 | 10111 | TWENTY-NINE |
| 31 | 01111 | THIRTY |
| 32 | 11111 | THIRTY-ONE |

**Sequence:** 1 → 2 → 3 → ... → 32 → repeat  

## 3. Circuit design

![Circuit diagram screenshot](schematic.png)

### Ohm's law calculations

| LED | Arduino output voltage (V) | LED voltage drop (V) | Calculated resistor voltage (V) | Target current (mA) | Calculated resistance (Ω) | Chosen resistance (Ω) | Estimated actual current (mA) |
| --- | --- | --- | --- | --- | --- | --- | --- |
| White LED | 5.0 | 3.0 | 2.0 | 30 | 67 | 220 | 9 |
| Blue LED | 5.0 | 3.0 | 2.0 | 20 | 100 | 220 | 9 |
| Green LED | 5.0 | 3.0 | 2.0 | 30 | 67 | 220 | 9 |
| Yellow LED | 5.0 | 2.0 | 3.0 | 30 | 100 | 220 | 13 |
| Red LED | 5.0 | 2.0 | 3.0 | 20 | 150 | 220 | 13 |

## 4. Testing and revision

**Person 1:** The Arduino powers each LED at double the time interval of the LED to its left, like a clock counting upwards in multiples of two.

**Person 2:** "It changes the color of the lights when you're driving [sic\]"

**Did their interpretations match your intended meaning? Explain:** I do not know exactly what Person 2 meant by their comment, but person 2 interpreted a function analogous to the intended effect (binary counter). Neither provided exact feedback, but the provided label was noted by Person 1 as being a key aspect in their reasoning.

**Revisions made to the system based on feedback**
> Describe at least one revisions you made based on the feedback you received and TEST it again.

**Revision and reason**: The delay between state changes was doubled, from 100ms to 200ms.

**Result after testing the revision:** The state changes of the LEDs are considerably easier to follow.

## 5. Video Demonstration
> Replace the placeholder below with a link to your video. Demonstrate the complete repeating sequence and explain what each signal communicates. Make sure 
> your instructor can access the video.

[Video demonstration](https://youtube.com/)
