import sys
import math
import string
import itertools
import heapq
import collections
import bisect
import array
import random
import time
import functools
import operator
import re
import queue
import threading
import ctypes
import cmath
import copy
import fractions
import decimal
import statistics
import scipy
import scipy.special
import scipy.misc
import scipy.integrate
import scipy.interpolate
import scipy.ndimage
import scipy.fftpack
import numpy
import numpy.random
import numpy.linalg
import numpy.polynomial
import numpy.fft
import numpy.ctypeslib
import matplotlib.pyplot
import matplotlib.pylab
import matplotlib.mlab
import matplotlib.patches
import matplotlib.lines
import matplotlib.path
import matplotlib.collections
import matplotlib.colors
import matplotlib.cm
import matplotlib.ticker
import matplotlib.font_manager
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_gtk
import matplotlib.backends.backend_wx
import matplotlib.backends.backend_wxagg
import matplotlib.backends.backend_tkagg
import matplotlib.backends.backend_macosx
import matplotlib.backends.backend_qt4agg
import matplotlib.backends.backend_gtkagg
import matplotlib.backends.backend_ps
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import matplotlib.backends.backend_webagg_core
import matplotlib.backends.backend_webagg
import matplotlib.backends.backend_nbagg
import matplotlib.backends.backend_agg
import matplotlib.backends.backend_pdf
import matplotlib.backends.backend_svg
import matplotlib.backends.backend_cairo
import