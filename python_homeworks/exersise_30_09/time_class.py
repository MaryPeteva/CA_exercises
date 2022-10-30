from datetime import datetime

# Where is getters, setters?
SECONDS_IN_HOUR = 3600
SECONDS_IN_MINUTE = 60


class Time:
    """
    class Time keeps the starting time of each competitor
    sums the diff between current time and starting time
    """

    @staticmethod
    def set_hour(self, hour_input):
        self._hour = hour_input

    @staticmethod
    def set_minute(self, input_minute):
        self._minute = input_minute

    @staticmethod
    def set_seconds(self, seconds_input):
        self._second = seconds_input

    @staticmethod
    def set_finish_hour(self, hour):
        self.finish_hour = hour

    @staticmethod
    def set_finish_minute(self, minute):
        self.finish_minute = minute

    @staticmethod
    def set_finish_second(self, second):
        self.finish_second = second

    @staticmethod
    def time_to_normal_format(self, time_in_seconds):
        time_in_seconds = time_in_seconds % (24 * 3600)
        hour = time_in_seconds // 3600
        time_in_seconds %= 3600
        minutes = time_in_seconds // 60
        time_in_seconds %= 60
        self.set_finish_hour(hour)
        self.set_finish_minute(minutes)
        self.set_finish_seconds(time_in_seconds)

    @staticmethod
    def check_diff(start, curr):
        diff = 0
        if curr >= start:
            diff = curr - start
        else:
            diff = start - curr

        return diff

    def __init__(self, hour=0, minute=0, seconds=0):
        self._hour = hour
        self._minute = minute
        self._second = seconds
        # self._finish_hour
        # self._finish_minute
        # self._finish_second

    @staticmethod
    def time_diff(self):
        current_time = datetime.now()
        start_to_seconds = (self._hour * SECONDS_IN_HOUR) + (self._minute * SECONDS_IN_MINUTE) + self._second
        current_to_seconds = (current_time.hour * SECONDS_IN_HOUR) + (current_time.minute * SECONDS_IN_MINUTE) + current_time.second
        diff_in_seconds = self.check_diff(start_to_seconds, current_to_seconds)
        self.time_to_normal_format(diff_in_seconds)

    def __str__(self):
        return f'| {int(self._hour):02d}:{int(self._minute):02d}:{int(self._second):02d} |{int(self.finish_hour):02d}:' \
               f'{int(self.finish_minute):02d}{int(self.finish_second):02d}|'
