/*
In C programming, an identifier is a name given to a variable, function, array, structure, label, or any other user-defined item. Identifiers are used to uniquely identify these program elements within the scope in which they are defined. Here are some rules for naming identifiers in C

1] Identifiers must begin with a letter (a-z, A-Z) or an underscore (_) character.
Example :
age, weight, flag_1

2] After the first character, identifiers can contain letters (a-z, A-Z), digits (0-9), and underscores (_).
Example:
level_1, num10

3] C is case-sensitive, so uppercase and lowercase letters are considered different.
Example:
firstname, Firstname, FirstName, FirstNAME, FIRSTNAME

4] Identifiers cannot be a C keyword or a predefined identifier (like int, char, for, etc.).

for = 10, if = 35 - False

5] Identifiers can be of any length, but only the first 31 characters are significant.

6] White-space are not allowed.
firsr name - False
first_name - True

7] Special symbols are not allowed
@xyz, hello#736


Examples of valid identifiers in C:

myVariable
_counter
sumOfNumbers
MAX_SIZE
first_name
tep_val
level_1


Examples of invalid identifiers in C:

3total (starts with a digit)
for (a keyword)
my Variable (contains a space)
float (a predefined identifier)

*/