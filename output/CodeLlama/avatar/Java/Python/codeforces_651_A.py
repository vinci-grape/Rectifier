import sys
import math
import string
import collections
import bisect
import heapq
import time
import random
import itertools
import array
import copy
import re
import cmath
import codecs
import string
import queue
import threading
import numpy as np
import scipy.misc
import scipy.ndimage
import scipy.signal
import scipy.fftpack
import matplotlib.pyplot as plt
import matplotlib.patches as patches
import matplotlib.lines as lines
import matplotlib.path as path
import matplotlib.cm as cm
import matplotlib.colors as colors
import matplotlib.ticker as ticker
import matplotlib.gridspec as gridspec
import matplotlib.collections as collections
import matplotlib.image as mpimg
import matplotlib.animation as animation
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_ps as ps
import matplotlib.backends.backend_svg as svg
import matplotlib.backends.backend_qt4 as qt4
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_wx as wx
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_gtk as gtk
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_cairo as cairo
import matplotlib.backends.backend_gdk as gdk
import matplotlib.backends.backend_template as template
import matplotlib.backends.backend_qt4agg as qt4agg
import matplotlib.backends.backend_agg as agg
import matplotlib.backends.backend_qt4cairo as qt4cairo
import matplotlib.backends.backend_tkagg as tkagg
import matplotlib.backends.backend_wxcairo as wxcairo
import matplotlib.backends.backend_wxagg as wxagg
import matplotlib.backends.backend_gdkcairo as gdkcairo
import matplotlib.backends.backend_gtkcairo as gtkcairo
import matplotlib.backends.backend_pdf as pdf
import matplotlib.backends.backend_pgf as pgf
import matplotlib.backends.backend_ca