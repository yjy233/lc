package lcgo

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	l1 := len(nums1)
	l2 := len(nums2)

	if (l1+l2)%2 == 1 {
		return helperV4(nums1, nums2, (l1+l2)/2)
	}

	f1 := helperV4(nums1, nums2, (l1+l2)/2)
	f2 := helperV4(nums1, nums2, (l1+l2)/2-1)
	return (f1 + f2) / 2
}

func helperV4(nums1, nums2 []int, idx int) float64 {
	l1 := len(nums1)
	l2 := len(nums2)

	if l1 <= 0 {
		return float64(nums2[idx])
	}

	if l2 <= 0 {
		return float64(nums1[idx])
	}

	if idx == 0 {
		return float64(min(nums1[0], nums2[0]))
	}

	minIdx := min(idx/2-1, l1/2-1)
	minIdx = min(minIdx, l2/2-1)
	minIdx = max(minIdx, 0)

	if nums1[minIdx] < nums2[minIdx] {
		if minIdx == 0 {
			minIdx++
		}

		return helperV4(nums1[minIdx:], nums2, idx-minIdx)
	}

	if minIdx == 0 {
		minIdx++
	}

	return helperV4(nums1, nums2[minIdx:], idx-minIdx)
}
