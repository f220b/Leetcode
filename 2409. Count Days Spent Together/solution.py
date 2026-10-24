class Solution:
    def countDaysTogether(self, arriveAlice, leaveAlice, arriveBob, leaveBob):
        days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

        # Convert "MM-DD" into the day number of the year (1 to 365)
        def to_day_number(date):
            month = int(date[:2])
            day = int(date[3:])
            return sum(days_in_month[:month - 1]) + day

        # They are together from the later arrival to the earlier departure
        start = max(to_day_number(arriveAlice), to_day_number(arriveBob))
        end = min(to_day_number(leaveAlice), to_day_number(leaveBob))

        return 0 if end < start else end - start + 1