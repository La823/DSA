package main

import "fmt"

func binarySearch(arr []int, length int, key int) (index int) {
	s := 0
	e := length - 1

	for s <= e {
		mid := s + (e-s)/2 // Recalculate mid in each iteration

		if key == arr[mid] {
			return mid
		} else if key > arr[mid] {
			s = mid + 1
		} else {
			e = mid - 1
		}
	}

	return -1
}

func main() {

	// var arr [5]int = [5]int{1, 2, 3, 4, 5}
	// var ages = [3]int{5, 8, 9}

	names := []int{1, 2, 3, 4, 5}
	names = append(names, 0)

	index := binarySearch(names, len(names), 4)
	fmt.Println("", index)

}
