import sys
import math
import string
import re
import heapq
import collections
import bisect
import itertools
import random
import time
import numpy as np
import scipy as sp
import scipy.sparse
import scipy.special
import scipy.stats
import scipy.optimize
import scipy.interpolate
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.pylab as pylab
import matplotlib.ticker as ticker
import matplotlib.cm as cm
import matplotlib.colors as colors
import matplotlib.patches as patches
import matplotlib.path as mpath
import matplotlib.collections as mcoll
import matplotlib.gridspec as gridspec
import matplotlib.animation as animation
import matplotlib.image as mpimg
import mpl_toolkits.mplot3d as mplot3d
import mpl_toolkits.axes_grid as axes_grid
import mpl_toolkits.axisartist as axisartist
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.grid_finder as grid_finder
import mpl_toolkits.axisartist.parasite_axes as parasite_axes
import mpl_toolkits.axisartist.angle_helper as angle_helper
import mpl_toolkits.axisartist.grid_finder as grid_finder
import mpl_toolkits.axisartist.grid_locator as grid_locator
import mpl_toolkits.axisartist.tick_locator as tick_locator
import mpl_toolkits.axisartist.tick_formatter as tick_formatter
import mpl_toolkits.axisartist.axis_artist as axis_artist
import mpl_toolkits.axisartist.axis_artist_grid as axis_artist_grid
import mpl_toolkits.axisartist.axis_artist_helper as axis_artist_helper
import mpl_toolkits.axisartist.table_helper as table_helper
import mpl_toolkits.axisartist.axisline_style as axisline_style
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating_axes as floating_axes
import mpl_toolkits.axisartist.floating