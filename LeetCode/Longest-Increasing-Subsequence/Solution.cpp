const piles = [];
for (const num of nums) {
    const idx = searchInsert(piles, num);
    //just use (35. Search Insert Position) as helper function
    if (idx < nums.length) piles[idx] = num;
    else piles.push(num)
}
return piles.length;