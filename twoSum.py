"""
#Solution to two sum problem:

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
"""


def twoSum(nums, target):
    #nums is a list of integers
    #strategy is to loop through in an n-squared fashion
    listlength = len(nums)
    for x in range(0, listlength):
        for y in range (x+1, listlength):
            if y != x:
                if nums[x] + nums[y] == target:
                    answer = []
                    answer.append(x)
                    answer.append(y)
                    return answer

def main():
    nums = [2, 7, 11, 15]
    target = 9
    print(twoSum(nums, target))

if __name__ == '__main__':
    main()
