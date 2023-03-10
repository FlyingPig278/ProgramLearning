import os
import time

import requests
from bs4 import BeautifulSoup

ids = [3, 7, 9, 18, 22, 25, 26, 34, 42, 44, 45, 46, 50, 52, 54, 57, 60, 62, 63, 71, 77, 81, 84, 86, 89, 90, 91, 93, 94,
       95, 96, 97, 98, 99, 100, 101, 104, 107, 108, 109, 110, 113, 114, 115, 117, 118, 119, 120, 124, 125, 126, 127,
       128, 129, 130, 132, 134, 135, 136, 138, 139, 140, 141, 142, 143, 144, 145, 147, 148, 152, 154, 156, 174, 178,
       179, 180, 181, 182, 185, 187, 188, 190, 191, 192, 199, 200, 201, 202, 203, 205, 206, 207, 208, 210, 211, 212,
       213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 226, 227, 229, 230, 231, 232, 233, 234, 235, 236,
       237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258,
       259, 260, 261, 262, 263, 264, 267, 269, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 284, 285,
       286, 287, 288, 289, 290, 291, 293, 294, 295, 297, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310,
       311, 312, 313, 314, 316, 318, 319, 320, 324, 327, 329, 336, 337, 341, 343, 344, 345, 346, 347, 348, 349, 350,
       351, 352, 353, 354, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 367, 369, 372, 373, 375, 376, 377, 378,
       379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 396, 398, 399, 400, 401, 402,
       403, 404, 405, 406, 407, 408, 409, 412, 413, 414, 416, 417, 418, 419, 420, 422, 424, 425, 426, 427, 428, 429,
       430, 431, 432, 433, 434, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 448, 449, 451, 452, 453, 454, 455,
       456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477,
       478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 490, 491, 494, 495, 496, 497, 498, 499, 500, 501, 502,
       503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 518, 519, 520, 521, 522, 523, 524, 525,
       527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 541, 543, 544, 546, 547, 548, 549, 550, 551, 552,
       553, 554, 555, 556, 557, 558, 559, 560, 561, 563, 564, 565, 566, 567, 569, 570, 571, 572, 573, 574, 575, 576,
       577, 578, 579, 580, 581, 582, 583, 584, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599,
       600, 601, 602, 603, 604, 605, 608, 609, 610, 611, 612, 613, 615, 616, 617, 619, 620, 621, 622, 623, 624, 625,
       626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647,
       648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 659, 660, 661, 663, 664, 665, 666, 667, 668, 669, 670, 671,
       672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 683, 684, 685, 687, 688, 690, 691, 692, 693, 694, 695, 696,
       698, 699, 700, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720,
       721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742,
       743, 744, 745, 746, 747, 748, 749, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766,
       768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790,
       791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 809, 810, 811, 812, 813,
       814, 815, 816, 817, 818, 821, 822, 823, 824, 825, 826, 828, 830, 831, 832, 833, 836, 837, 838, 839, 840, 841,
       842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 854, 855, 856, 857, 858, 859, 860, 862, 863, 864, 865,
       866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883]


def download_images(url):
    # ???????????? HTML
    response = requests.get(url)
    html = response.text

    # ?????? BeautifulSoup ??????
    soup = BeautifulSoup(html, 'html.parser')

    # ?????????????????????????????????
    entrys = soup.find_all('div', class_='entry')

    # ???????????????????????????????????????
    index = 1
    for entry in entrys:
        # ???????????? URL
        img_url = entry.contents[1].attrs.get('src')

        # ??????????????????
        title = entry.contents[1].attrs.get('alt')

        # ???????????????????????????????????????
        name, content = title.split(' ', 1)
        name = name.replace(' ', '')
        content = content.replace(' ', '')
        # ??????????????????????????????
        dir_path = os.path.join('images', name)
        if not os.path.exists(dir_path):
            os.makedirs(dir_path)
        file_path = os.path.join(dir_path, f'{content}__{index}.jpg')
        index += 1
        if os.path.exists(file_path):
            continue
        else:
            with open(file_path, 'wb') as f:
                f.write(requests.get(img_url).content)


print(f'?????????????????????')
len = len(ids)
index = 0
for i in ids:
    index += 1
    url = f'https://tuci.vip/album/detail/{i}/?category=&'
    try:
        download_images(url)
    except requests.exceptions.RequestException as e:
        print(f'????????????: {e}')
        print(f'??????10s???????????????')
        time.sleep(10)
        download_images(url)

    # ???????????????????????????
    print(f'?????????????????????{index}/{len}')
print(f'????????????')
