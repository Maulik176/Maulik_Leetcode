class Solution:
	def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
		seats.sort()
		students.sort()
		moves=0
		for i in range(len(seats)):
			n=abs(seats[i]-students[i])
			moves=moves+n
		return moves