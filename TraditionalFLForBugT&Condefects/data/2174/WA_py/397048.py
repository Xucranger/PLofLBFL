# coding=utf-8
while True:
    nums = raw_input().split()
    nums[0] = int(nums[0])
    nums[1] = int(nums[1])
    if nums[1] == 0:
        print 'error'
    else:
        print int(nums[0] / nums[1] + 0.5)
