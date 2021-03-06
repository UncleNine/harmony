/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/**
 * @author Nikolay A. Kuznetsov
 */
package java.util.regex;

/**
 * Represents end of input '\z', i.e. matches only character after the last one;
 * 
 * @author Nikolay A. Kuznetsov
 */
class EOISet extends AbstractSet {

    public int matches(int stringIndex, CharSequence testString,
            MatchResultImpl matchResult) {
        int rightBound = matchResult.hasTransparentBounds() ? testString
                .length() : matchResult.getRightBound();
        if (stringIndex < rightBound)
            return -1;

        matchResult.hitEnd = true;
        matchResult.requireEnd = true;

        return next.matches(stringIndex, testString, matchResult);
    }

    /**
     * Returns false, enough for quantifiers
     */
    public boolean hasConsumed(MatchResultImpl matchResult) {
        return false;
    }

    protected String getName() {
        return "EOI"; //$NON-NLS-1$
    }
}
