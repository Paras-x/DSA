/* var twoSum = function(nums, target) {

    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {

            if (nums[i] + nums[j] === target) {
                return [i, j];
            }

        }
    }

}; */

var twoSum = function(nums, target) {

    let arr = nums.map((value, index) => [value, index]);

    arr.sort((a, b) => a[0] - b[0]);

    let i = 0;
    let j = arr.length - 1;

    while (i < j) {

        let sum = arr[i][0] + arr[j][0];

        if (sum === target) {
            return [arr[i][1], arr[j][1]];
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return [];
};

