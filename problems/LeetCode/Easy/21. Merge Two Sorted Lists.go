package task21

import "math"

type ListNode struct {
	Val  int
	Next *ListNode
}

func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
	var res ListNode

	for *list1 != nil || list2.Val {
		res.Val = int(math.Min(float64(list1.Val), float64(list2.Val)))
		return
	}
}

func main() {

}
