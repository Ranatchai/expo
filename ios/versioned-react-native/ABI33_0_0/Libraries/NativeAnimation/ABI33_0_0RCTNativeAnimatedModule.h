/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ReactABI33_0_0/ABI33_0_0RCTBridgeModule.h>
#import <ReactABI33_0_0/ABI33_0_0RCTEventDispatcher.h>
#import <ReactABI33_0_0/ABI33_0_0RCTEventEmitter.h>
#import <ReactABI33_0_0/ABI33_0_0RCTUIManager.h>
#import <ReactABI33_0_0/ABI33_0_0RCTUIManagerObserverCoordinator.h>
#import <ReactABI33_0_0/ABI33_0_0RCTUIManagerUtils.h>

#import "ABI33_0_0RCTValueAnimatedNode.h"

@interface ABI33_0_0RCTNativeAnimatedModule : ABI33_0_0RCTEventEmitter <ABI33_0_0RCTBridgeModule, ABI33_0_0RCTValueAnimatedNodeObserver, ABI33_0_0RCTEventDispatcherObserver, ABI33_0_0RCTUIManagerObserver>

@end
