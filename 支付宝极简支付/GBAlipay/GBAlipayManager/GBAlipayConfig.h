//
//  GBAlipayConfig.h
//  支付宝极简支付
//
//  Created by marks on 15/6/3.
//  Copyright (c) 2015年 zhangguobing. All rights reserved.
//

#ifndef ________GBAlipayConfig_h
#define ________GBAlipayConfig_h

#import <AlipaySDK/AlipaySDK.h>     // 导入AlipaySDK
#import "Order.h"                   // 导入订单类
#import "DataSigner.h"              // 生成signer的类
/**
 *  合作身份者id，以2088开头的16位纯数字
 */
#define PartnerID @"2088911839225574"
/**
 *  收款支付宝账号
 */
#define SellerID  @"3077272878@qq.com"

/**
 *  安全校验码（MD5）密钥，以数字和字母组成的32位字符
 */
#define MD5_KEY @"qvkirgwkssqhxhs4t041ri4cqxdvhsxb"
/**
 *  appSckeme:应用注册scheme,在Info.plist定义URLtypes，处理支付宝回调
 */
#define kAppScheme @"KSFCAlipay2015"
/**
 *  支付宝服务器主动通知商户交易是否成功 网站里指定的页面 http 路径。非必需
 */
#define kNotifyURL @""
/**
 *  商户私钥，自助生成
 */
#define PartnerPrivKey @"MIICdQIBADANBgkqhkiG9w0BAQEFAASCAl8wggJbAgEAAoGBAJe/ex7q+zboVHNg823dPWuDHUkyI3mP1yNJEfFXPNJ5hdjv/Nd6LJNmpo08gdjBpCBYXwrfTeH9p+Op9BDCG5klIJPeJSBUEiNvuXKAJFyLPbHTNUJBjFkV049k38ENxycZLj455nfYcH22RqBxcj6qQoiBE4OqE+JEcrNDhc51AgMBAAECgYAbbvqLNGAGJSpfUX+wtPaNoT6CJRZUu7RhJKyhvOu6AU45Uemb6vJ0E3K4xd+TmC5byp4kEQq7eGgJuIfvH6htWAlTZ0doC5T2bRuZhR37J6Fsh5Pd4BwpvY+XpTFzWwx5pHSHLmwX++MygUjbS3IqLlppd75xOpORSXqIf59pYQJBAMkmA3CwolVO47dHRIEEaNikIoNgfrurI/N6WNplT2JAleZUPPaml6d5LtayqeiXCTKKzMVesxZRwYnO2/Op5CMCQQDBIN0ponyMOUQrhkK5TTwAzgSo1+4h7L+6QqEW/JfGJi9XiWAY1DiFbIoQ8TTXu8zg40wFhJEd8IrtNE5c/4CHAkAN7Z3rXa+/7HiEJmEt9do0thjVtAbSg+U3ZM9mQAGhMguvKUIXai2yIQgHQdPWES9H2qiXOhl4gCzAmBxO4QK1AkAv09mxg+HgQBZXyQohJbVkZaDVx5PbpuvcTr/iF2/mzHIQ9Z5sx7GvqS+P/owdmQ6l6uRawXfGuFlPYRK/CS9lAkA/8nryeOVO8w5kra1gfUqMr/PQzpKWcfqWnqiImQhJoJN2iv48B9xOIg8XDV8WngThoNs6yxQA0IUC7PzcWxp6"

/**
 *  支付宝公钥
 */
#define AlipayPubKey   @"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDDI6d306Q8fIfCOaTXyiUeJHkrIvYISRcc73s3vF1ZT7XN8RNPwJxo8pWaJMmvyTn9N4HQ632qJBVHf8sxHi/fEsraprwCtzvzQETrNRwVxLO5jVmRGi60j8Ue1efIlzPXV9je9mkjzOmdssymZkh2QhUrCmZYI/FCEa3/cNMW0QIDAQAB"

#endif

