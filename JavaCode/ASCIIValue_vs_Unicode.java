import java.security.Key;

public class ASCIIValue_vs_Unicode {
    public static void main(String[] args){
// In Java, the codePointAt() method is used to retrieve the Unicode code point of a character at a specified index in a String.
//  A Unicode code point is not the same as an ASCII value, though ASCII values are a subset of Unicode. Unicode encompasses a much
//  larger range of characters, including those from various languages and symbols.

// Key Points:

// ASCII vs Unicode:

// ASCII values range from 0 to 127 and represent basic English characters.
// Unicode code points cover a much broader range, supporting characters from many languages and symbols.

// codePointAt():

// It returns the Unicode code point of the character at the specified index.
// The return value is an int representing the code point.
// Example Code:
// Copy the code

        String text = "A😊";
        
        // Get Unicode code point of the first character
        int codePoint1 = text.codePointAt(0); // 'A'
        System.out.println("Unicode code point of 'A': " + codePoint1); // Output: 65 (ASCII value)

        // Get Unicode code point of the emoji
        int codePoint2 = text.codePointAt(1); // '😊'
        System.out.println("Unicode code point of '😊': " + codePoint2); // Output: 128522
    }
}

// Explanation:
// For 'A', the Unicode code point is 65, which matches its ASCII value.
// For '😊', the Unicode code point is 128522, which is outside the ASCII range.

// So, while codePointAt() can return ASCII values for basic characters, it is designed to handle the full range of Unicode characters, making it much more versatile.
 
