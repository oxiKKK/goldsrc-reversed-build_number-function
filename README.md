# GoldSource reverse-engineered build_num function

A reverse-engineered replica of the GoldSrc's engine build number generator algorithm.

The code was tested on [goldsrc-version-list](https://github.com/oxiKKK/goldsrc-version-list).

Sample input: `"Dec 10 2019"` -> `8447`

# Information

This algorithm is used to calculate the amount of days since the release date of Half-Life (also known as Quiver in the first year of development). The release date should be **Thursday, October 24, 1996**.

The latest build (As of September 2022) has the build number **8684**. That is from **August 3, 2020**.
