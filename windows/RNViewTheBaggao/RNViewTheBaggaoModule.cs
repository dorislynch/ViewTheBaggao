using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace View.The.Baggao.RNViewTheBaggao
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNViewTheBaggaoModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNViewTheBaggaoModule"/>.
        /// </summary>
        internal RNViewTheBaggaoModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNViewTheBaggao";
            }
        }
    }
}
