class BasicAssembler:
    def __init__(self, file):
        with open(file, "r") as f:
            self.content = f.readline()
