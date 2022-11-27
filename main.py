import scripts.setup as setup
import scripts.build as build
import time
import sys

start_time = time.time()

setup.main()

if sys.platform == "linux":
    build.buildLinux()
else:
    print(sys.platform, "is not supported")

print("build time: ", time.time() - start_time)