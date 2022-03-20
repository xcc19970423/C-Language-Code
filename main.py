import yaml
import sys
import argparse
import os
from IPython import embed
from easydict import EasyDict
from interfaces.super_resolution import TextSR
import torch

torch.cuda.set_per_process_memory_fraction(0.5, 0)
# torch.cuda.empty_cache()
# total_memory = torch.cuda.get_device_properties(0).total_memory
# print(total_memory)
def main(config, args):
    Mission = TextSR(config, args)

    if args.test:
        Mission.test()
    elif args.demo:
        Mission.demo()
    else:
        Mission.train()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='')
    parser.add_argument('--arch', default='tsrn', choices=['tsrn', 'bicubic', 'srcnn', 'vdsr', 'srres', 'esrgan', 'rdn',
                                                           'edsr', 'lapsrn'])
    parser.add_argument('--test', action='store_true', default=True)    #default=False
    parser.add_argument('--test_data_dir', type=str, default='/media/C/xcc/TextZoom-master/src/dataset/lmdb/str/TextZoom/test/', help='')
    parser.add_argument('--batch_size', type=int, default=128, help='')    #default=None
    parser.add_argument('--resume', type=str, default=None, help='')
    parser.add_argument('--vis_dir', type=str, default='vis', help='')      #default=None
    parser.add_argument('--rec', default='moran', choices=['aster', 'moran', 'crnn'])
    parser.add_argument('--STN', action='store_true', default=True, help='')
    parser.add_argument('--syn', action='store_true', default=False, help='use synthetic LR')
    parser.add_argument('--mixed', action='store_true', default=False, help='mix synthetic with real LR')
    parser.add_argument('--mask', action='store_true', default=True, help='')     #default=False
    parser.add_argument('--gradient', action='store_true', default=True, help='')   #default=False
    parser.add_argument('--hd_u', type=int, default=32, help='')
    parser.add_argument('--srb', type=int, default=5, help='')
    parser.add_argument('--demo', action='store_true', default=False)
    parser.add_argument('--demo_dir', type=str, default='./demo')
   # parser.add_argument('--loss', type=str, default='L1',help='loss function configuration')    #后加的edgeloss
    parser.add_argument('--dataedge', type=str, default='/media/C/xcc/TextZoom-master/src/dataset/lmdb/str/TextZoom/train')
    args = parser.parse_args()
    config_path = os.path.join('config', 'super_resolution.yaml')
    config = yaml.load(open(config_path, 'r'), Loader=yaml.Loader)
    config = EasyDict(config)
    main(config, args)
