"""
from typing import List

def sum_list(nums: List[int]):
    total = 0
    for num in nums:
        total += num
    return(total)

result = sum_list([1,2,3,4])
print(result)
"""

"""
#If only adding a specific number of elements in a list

from typing import List

def sum_list(nums: List[int]):
    total = 0
    for num in nums[:2]: <-- elements from index 0 up to (but not including) index 2
        total += num
    return(total)

result = sum_list([1,2,3,4])
print(result)
"""

"""
my_dict = {
    "a": 1,
    "b": 2
}

#print(my_dict["a"])

for key, value in my_dict.items():
    print(key, value)
"""

"""
from typing import List

class Solution:
    def twoSum(self, nums: List [int], target: int) -> List[int]:
        lookup = {}                                                             #<-- dictionary: important for assigning values to list elements

        for i, num in enumerate(nums):                                          #<-- enumerate: give index and value an element in list
            complement = target - num

            if complement in lookup:
                return [lookup[complement], i]
            
            lookup[num] = i

nums = [2, 7, 11, 15]
target = 18

sol = Solution()
result = sol.twoSum(nums, target)
print(result)
"""

"""
class Solution:
    def isPalindrome(self, x: int) -> bool:
        y = x                                                                    #placeholder for value of x
        if x <= 9 and x >= 0:
            print(x, "This number is a palindrome.")
            return True
        elif x < 0:
            print(x, "This number is not a palindrome.")
            return False
        else:
            digits = []

            while y > 0:
                digits.append(y % 10)                                            #<-- adds the remainder of modulo as the first element in the list digits[]
                y //= 10                                                         #<-- Once last digit has been added to list, divide and round off y

            result = int("".join(str(digit) for digit in digits))                #<-- Convert digits[] into string and into integer
            print(result)
            if result == x:
                print(result, "This number is a palindrome.")
                return True
            else:
                print(result, "This number is not a palindrome.")
                return False


x = -121
sol = Solution()
sol.isPalindrome(x)
"""

"""
class Solution:
    def isPalindromeString(self, s: str) -> bool:
        s = s.lower().replace(" ","")                                            #<-- s.lower() changes word into lowercase, replace(" ","") remove spaces
        return s == s[::-1]                                                      #<-- s[::-1] reverses the string "Python" -> "nothyP"
    
sol = Solution()
print(sol.isPalindromeString("a man a plan a canal panama"))
"""    

"""
class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        i = 0
        x = 0

        while i < len(s):
            if s[i] not in roman:
                print("This character is not a Roman numeral")
                break
            else:
                if i == (len(s) - 1):                                                #if while == False (Last character)
                    x += roman[s[i]]                                                 #add value onto x
                else:                                                                #if while == True (First to middle characters)
                                                                                     #Still check position of character before adding value to x
                    if roman[s[i]] >= roman[s[i + 1]]:                               #if current character >= next 
                        x += roman[s[i]]
                    elif roman[s[i]] < roman[s[i + 1]]:                              #if current characeter < next, subtract next to current
                        x += roman[s[i + 1]] - roman[s[i]]
                        i += 1                                                       #i + 1 then + 1 again after elif skipping next character.
            i += 1

        print(x)

sol = Solution()
sol.romanToInt("MCMXCIV")
"""

"""
from typing import List

class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""

        prefix = strs[0]

        for word in strs[1:]:
            while not word.startswith(prefix):
                prefix = prefix[:-1]
                print(prefix)
                if prefix == "":
                    return ""

        return prefix
        

sol = Solution()
result = sol.longestCommonPrefix(["flower", "flow", "flight"])
print(result)
"""

"""
class Solution:
    def isValid(self, s: str) -> bool:
        open = {"(": 1, "[": 2, "{": 3}
        close = {")": 1, "]": 2, "}": 3}
        partner = []
        
        for i in range(len(s)):
            if s[i] in open:
                partner.append(open[s[i]])
            elif s[i] in close:
                if len(partner) == 0:
                    return(False)
                elif close[s[i]] == partner[len(partner) - 1]:
                    partner.pop(len(partner) - 1)
                else:
                    return(False)

        if len(partner) == 0:
            return(True)
        else:
            return(False)
           
sol = Solution()
result = sol.isValid("(())))]}}}]])")
print(result)
"""

"""
class Solution:
    def max_difference(self, nums: list[int]) -> int:
        max_seen = nums[-1]  # start from the last element
        max_diff = float('-inf') # max difference starts with negative infinity to make sure any difference found is valid

        for i in range(len(nums) - 2, -1, -1):
            current = nums[i]

            max_diff = max(max_diff, max_seen - current) #max() function: returns the larger of two values
            max_seen = max(max_seen, current)

        return max_diff
           
sol = Solution()
result = sol.max_difference([5, 3, 6, 1, 4])
print(result)
"""

"""
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        print(list1, list2)
sol = Solution()
result = sol.max_difference([1,2,4], [1,3,4])
print(result)
"""