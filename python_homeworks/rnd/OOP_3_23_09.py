# class AudioFile:
#
#     def __init__(self, file_name):
#         if not file_name.endswith(self.ext):
#             raise Exception('Invalid file format')
#         else:
#             self.file_name = file_name
#
#     def play(self):
#         raise NotImplementedError('Must implement')
#
#
# class MP3File(AudioFile):
#     ext = 'mp3'
#
#     def play(self):
#         print(f'playing {self.file_name} as {self.ext}')
#
#
# class OggFile(AudioFile):
#     ext = 'ogg'
#
#     def play(self):
#         print(f'playing {self.file_name} as {self.ext}')
#
#
# mp3 = MP3File('neshtosi.mp3')
# ogg = OggFile('neshtosi.ogg')
#
# mp3.play()
# ogg.play()

